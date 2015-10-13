/*
 * =====================================================================================
 *
 *       Filename:  3.22.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 14时37分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.22.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 14时37分51秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<string>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<string> svec = {
		"I ",
		"am ",
		"your ",
		"god! ",
		"",
		"hahaha"
	};
	for(auto it = svec.begin(); it != svec.end() && !it->empty(); ++it)
	{
		for(auto &c: *it)
		{
			toupper(c);
		}
		cout<< *it;
	}
	cout<<endl;

	return 0;
}				/* ----------  end of function main  ---------- */

