/*
 * =====================================================================================
 *
 *       Filename:  6.25.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 11时39分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.25.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 11时39分28秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;
int main ( int argc, char *argv[] )
{
	if (argc == 3)
	{
		string s1{
			argv[1]
		}, s2{
			argv[2]
		};
		cout << s1 + s2 << endl; 
	}
	return 0;
}				/* ----------  end of function main  ---------- */

