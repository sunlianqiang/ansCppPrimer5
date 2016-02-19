/*
 * =====================================================================================
 *
 *       Filename:  X.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月18日 18时07分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
  > File Name: X.cpp
  > Author: ma6174
  > Mail: ma6174@163.com 
  > Created Time: 2016年02月18日 星期四 18时07分12秒
 ************************************************************************/

#include<iostream>
#include	<array>
using namespace std;

/*
 * =====================================================================================
 *        Class:  X
 *  Description:  
 *
 * =====================================================================================
 */
class X
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		X () {
			std::cout << "X()" << std::endl;
		}/* constructor */

		X(const X&) {
			std::cout << "X(const X&)" << std::endl;
		}

		X& operator=(const X& rhs) {
			std::cout << "X& operator=(const X&)" << std::endl;
			return *this;
		}

		~X() {
			std::cout << "~X()" << std::endl;
		}
		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:

}; /* -----  end of class X  ----- */

void test1(X x)
{
	std::cout << "test1()" << std::endl;
}

void test2(X &x)
{
	std::cout << "test2()" << std::endl;
}

int main ( int argc, char *argv[] )
{

	std::cout << "X x;" << std::endl;
	X x;
	std::cout << std::endl;

	std::cout << "X *px1 = new X()" << std::endl;
	X *px1 = new X();
	std::cout << std::endl;

	std::cout << "array<X, 5> arrX = x, *px1" << std::endl;
	array<X, 5> arrX = {
		x, *px1
	};
	std::cout << std::endl;

	std::cout << "1**** test1() begin" << std::endl;
	test1(x);
	std::cout << "1**** test1() end" << std::endl;
	std::cout << std::endl;

	std::cout << "2**** test2() begin" << std::endl;
	test2(x);
	std::cout << "2**** test2() end" << std::endl;
	std::cout << std::endl;

	std::cout << "delete px1" << std::endl;
	delete px1;
	std::cout << std::endl;
	return 0;
}				/* ----------  end of function main  ---------- */
