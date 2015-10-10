/*
 * =====================================================================================
 *
 *       Filename:  2.3.cpp
 *
 *    Description:  type
 *
 *        Version:  1.0
 *        Created:  2015年09月29日 11时07分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 2/2.3.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年09月29日 星期二 11时07分58秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define EXIT_SUCCESS 0
	int
main ( int argc, char *argv[] )
{
	unsigned u=10,  u2=42;
	cout	<< u2-u << endl;
	cout	<< u-u2 << endl;

	int i=10, i2=42;
	cout	<< i2-i << endl;
	cout	<< i-i2 << endl;
	cout	<< i-u << endl;
	cout	<< u-i << endl;

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
