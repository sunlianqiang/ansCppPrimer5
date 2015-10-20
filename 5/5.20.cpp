/*
 * =====================================================================================
 *
 *       Filename:  5.20.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 11时20分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 5/5.20.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 11时20分48秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

int main ( int argc, char *argv[] )
{
	string s1, s2;
	while(cin>>s2)
	{
		if ( s1 == s2 )
		{
			cout << s1 <<endl;
			break;
		}
		else
			s1 = s2;
	}
	if(s1 != s2)
		cout<< "no same string" <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
