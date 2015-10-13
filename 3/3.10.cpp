/*
 * =====================================================================================
 *
 *       Filename:  3.10.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月12日 16时12分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.10.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月12日 星期一 16时12分41秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;
	int
main ( int argc, char *argv[] )
{
	string s, s1;
	cin>>s;

	for(auto c : s)
	{
		if (!ispunct(c))
			s1 += c;
	}

	cout << s1 <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */

