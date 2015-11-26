/*
 * =====================================================================================
 *
 *       Filename:  41.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月26日 11时54分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 41.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月26日 星期四 11时54分30秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<char> vc = {
		'a', 'b','c'
	};
	string str;
	for (decltype(vc.size()) i = 0; i < vc.size(); ++i)
	{
		str.push_back(vc[i]);
	}
	cout << str << endl;
	return 0;
}				/* ----------  end of function main  ---------- */

