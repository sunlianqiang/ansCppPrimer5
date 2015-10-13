/*
 * =====================================================================================
 *
 *       Filename:  3.6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月12日 16时01分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.6.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月12日 星期一 16时01分35秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

	int
main ( int argc, char *argv[] )
{
	string s1("12345");
	for ( decltype(s1.size()) i = 0; i < s1.size() ; ++i)
	{
		s1[i] = 'X';
	}

	cout<< s1 <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
