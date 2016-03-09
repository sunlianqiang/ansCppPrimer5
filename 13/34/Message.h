/*
 * =====================================================================================
 *
 *       Filename:  Message.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月24日 17时03分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
using namespace std;

/*
 * =====================================================================================
 *        Class:  Message
 *  Description:  
 * =====================================================================================
 */
class Message
{
	friend class Folder;
	friend void swap(Message &lhs, Message &rhs);
	public:
		/* ====================  LIFECYCLE     ======================================= */
		explicit Message (const string &str = "") : content(str){
		}/* constructor */
		Message(const Message&);
		Message& operator=(const Message &);
		~Message();
		/* ====================  ACCESSORS     ======================================= */
		/* ====================  MUTATORS      ======================================= */
		/* ====================  OPERATORS     ======================================= */
		void save(Folder&);
		void remove(Folder&);
		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		string contents;
		set<Folder*> folders;
		void add_to_Folders(content Message&);
		void remove_from_Folders();
}; /* -----  end of class Message  ----- */

void Message::save (Folder &f)
{
	folders.insert(&f);
	f.addMsg(this);
}		/* -----  end of function Message::save  ----- */

void Message::remove (Folder &f)
{
	folders.erase(&f);
	f.remMsg(this);
}		/* -----  end of function Message::remove  ----- */

void Message::add_to_Folders (const Message &m)
{
	for (auto f : m.folders)
		f->addmsg(this);
	return ;
}		/* -----  end of function Message::add_to_Folders  ----- */

void Message::Message (const Message &m) : 
	contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);
	return ;
}		/* -----  end of function Message::Message  ----- */

void Message::remove_from_Folders ()
{
	for (auto f : folders)
		f->remMsg(this);
	return ;
}		/* -----  end of function Message::remove_from_Folders  ----- */

void Message::~Message ()
{
	remove_from_Folders();
	return ;
}		/* -----  end of function Message::~Message  ----- */

void Message::operator=(const Message &rhs)
{
	remove_from_Folders();
	contents = rhs.contents;
	folders = rhs.folders;
	add_to_Folders(rhs);
	return *this;
}		/* -----  end of function Message::operator=  ----- */

void swap(Message &lhs, Message &rhs)
{
	using std::swap;
	for (auto f : lhs.folders)
		f->remMsg(&lhs);

	for (auto f : rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);

	for (auto f : lhs.folders)
		f->addMsg(&lhs);
	for (auto f : rhs.folders)
		f->addMsg(&rhs);
	return ;
}		/* -----  end of function Message::swap  ----- */
