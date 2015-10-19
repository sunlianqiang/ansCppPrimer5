/*
 * =====================================================================================
 *
 *       Filename:  test4.2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月14日 11时10分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 4/test4.2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月14日 星期三 11时10分58秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main ( int argc, char *argv[] )
{
	cout<< "int:" << endl;
	int i = 3;
	int *p = &i;

	cout<< p <<endl;
	cout<< +p <<endl;

	cout<< "bool:" << endl;
	bool b = true;
	bool b2 = -b;
	bool *pb = &b;

	cout<< &b <<endl;
	cout<< pb << endl;
	cout << +pb << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
