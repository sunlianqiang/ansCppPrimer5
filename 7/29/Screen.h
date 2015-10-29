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

#include<iostream>
#include	<string>
using namespace std;

/*
 * =====================================================================================
 *        Class:  Screen
 *  Description:  
 * =====================================================================================
 */
class Screen
{
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

