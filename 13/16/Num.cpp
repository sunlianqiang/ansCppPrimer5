/*
 * =====================================================================================
 *
 *       Filename:  Num.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月19日 16时43分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: Num.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月19日 星期五 16时43分26秒
 ************************************************************************/

#include<iostream>
using namespace std;

/*
 * =====================================================================================
 *        Class:  Numbered
 *  Description:  
 * =====================================================================================
 */
class Numbered
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		Numbered () :  mysn(count++) {
		}/* constructor */

		Numbered (Numbered &rsh) :mysn(count++){
		}

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
		unsigned long long mysn;
	protected:

	private:
		static unsigned long long count;

}; /* -----  end of class Numbered  ----- */

unsigned long long Numbered::count = 1;

void f (const Numbered &s)
{
	cout << s.mysn << endl;
	return ;
}		/* -----  end of function f  ----- */

int main ( int argc, char *argv[] )
{
	Numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
	return 0;
}				/* ----------  end of function main  ---------- */
