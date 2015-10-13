/*
 * =====================================================================================
 *
 *       Filename:  3.5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月12日 14时32分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.5.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月12日 星期一 14时32分31秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

	int
main ( int argc, char *argv[] )
{
	string s1, s;
	while(cin>>s1)
	{
		s+=s1 + " ";
	}

	cout<< s<<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
