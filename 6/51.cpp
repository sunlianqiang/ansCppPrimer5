/*
 * =====================================================================================
 *
 *       Filename:  51.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月22日 11时44分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/51.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月22日 星期四 11时44分55秒
 ************************************************************************/

#include<iostream>
using namespace std;

void f (  )
{
	cout << "f()" << endl;
	return ;
}		/* -----  end of function f  ----- */
void f (int  )
{
	cout << "f(int)" << endl;
	return ;
}		/* -----  end of function f  ----- */
void f (int, int  )
{
	cout << "f(int, int)" << endl;
	return ;
}		/* -----  end of function f  ----- */
void f (double, double = 3.14  )
{
	cout << "f(double)" << endl;
	return ;
}		/* -----  end of function f  ----- */
int main ( int argc, char *argv[] )
{
	f(42);
	f(42,0);
	f(2.56,3.14);
	return 0;
}				/* ----------  end of function main  ---------- */
