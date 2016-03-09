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
#include	<set>
#include	<string>

using namespace std;

class Folder;
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
		explicit Message (const string &str = "") : contents(str){
		}/* constructor */
		Message(const Message&);
		Message& operator=(const Message &);
		~Message();
		/* ====================  ACCESSORS     ======================================= */
		/* ====================  MUTATORS      ======================================= */
		/* ====================  OPERATORS     ======================================= */
		void save(Folder&);
		void remove(Folder&);
		void addFolder(Folder*);
		void removeFolder(Folder*);
		/* ====================  DATA MEMBERS  ======================================= */
	protected:
	private:
		string contents;
		set<Folder*> folders;
		void add_to_Folders(const Message&);
		void remove_from_Folders();
}; /* -----  end of class Message  ----- */

/*
 * =====================================================================================
 *        Class:  Folder
 *  Description:  
 * =====================================================================================
 */
class Folder
{
	friend class Message;
	public:
		/* ====================  LIFECYCLE     ======================================= */
		Folder ();                             /* constructor */
		Folder(const Folder &rhs);
		Folder& operator=(const Folder &rhs);
		~Folder();

		/* ====================  ACCESSORS     ======================================= */
		/* ====================  MUTATORS      ======================================= */
		/* ====================  OPERATORS     ======================================= */
		void addMsg(Message *);
		void remMsg(Message *);
		/* ====================  DATA MEMBERS  ======================================= */
	protected:
	private:
		set<Message*> messages;
		void add_to_Messages(const Folder&);
		void remove_from_Messages();
}; /* -----  end of class Folder  ----- */

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

void Message::addFolder(Folder*f)
{
	folders.insert(f);
}
void Message::removeFolder(Folder*f)
{
	folders.erase(f);
}

void Message::add_to_Folders (const Message &m)
{
	for (auto f : m.folders)
		f->addMsg(this);
	return ;
}		/* -----  end of function Message::add_to_Folders  ----- */

Message::Message (const Message &m) : 
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

Message::~Message ()
{
	remove_from_Folders();
	return ;
}		/* -----  end of function Message::~Message  ----- */

Message& Message::operator=(const Message &rhs)
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

Folder::Folder(const Folder &rhs)
{
	remove_from_Messages();
	add_to_Messages(rhs);
}
Folder& Folder::operator=(const Folder &rhs)
{
	remove_from_Messages();
	add_to_Messages(rhs);
}
Folder::~Folder()
{
	remove_from_Messages();
}
void Folder::addMsg(Message *msg)
{
	messages.insert(msg);
}

void Folder::remMsg(Message *msg)
{
	messages.erase(msg);
}

void Folder::add_to_Messages(const Folder &f)
{
	for (auto m : f.messages)
		m->addFolder(this);
}
void Folder::remove_from_Messages()
{
	for (auto m : messages)
		m->removeFolder(this);
}
