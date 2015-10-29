/*
 * =====================================================================================
 *
 *       Filename:  Screen.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月28日 18时27分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: Screen.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月28日 星期三 18时27分32秒
 ************************************************************************/

#ifndef SCREEN_H_
#define SCREEN_H_

#include<iostream>
#include	<string>
#include	<vector>
using namespace std;

class Window_mgr {
	public:
		void clear();
};


/*
 * =====================================================================================
 *        Class:  Screen
 *  Description:  
 * =====================================================================================
 */
class Screen
{
		friend void Window_mgr::clear();
	public:
		typedef string::size_type pos;
		//using pos = string::size_type;
		/* ====================  LIFECYCLE     ======================================= */
		Screen () = default;                             /* constructor */
		Screen (pos h, pos w, const unsigned spNum) : height(h), width(w), contents(h*w, ' ') {
		};
		Screen(pos h, pos w, const char ch) : height(h), width(w), contents(h*w, ch) {
		};

		/* ====================  ACCESSORS     ======================================= */
		char getContent() const {
			return contents[cursor];
		}
		char getContent(pos h, pos w) const;


		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		Screen move(pos r, pos c);
		Screen set(char c) {
			contents[cursor] = c;
			return *this;
		};
		Screen display(ostream & os) {
			do_display(os);
			return *this;
		};
		const Screen display(ostream & os) const {
			do_display(os);
			return *this;
		};
		void do_display(ostream &os) const
		{
			os << contents;
		}


		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		pos cursor = 0;
		pos height = 0, width = 0;
		string contents;

}; /* -----  end of class Screen  ----- */

void Window_mgr::clear()
{
	Screen myScreeen(10, 20, 'X');
	cout << "before clear: " << endl;
	cout << myScreeen.contents <<endl;

	myScreeen.contents = "";
	cout << "after clear: " << endl;
	cout << myScreeen.contents <<endl;
}

#endif
