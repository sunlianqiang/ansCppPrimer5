/*
 * =====================================================================================
 *
 *       Filename:  3.17.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月12日 18时54分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.17.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月12日 星期一 18时54分54秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<vector>

using namespace std;
int main ( int argc, char *argv[] )
{
	vector<string> svec;
	string s;

	while( cin>>s )
	{
		for(auto &c : s)
		{
			c = toupper(c);
		}
		svec.push_back(s);
	}

	for( auto s1:svec)
	{
		cout<< s1 <<endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */

