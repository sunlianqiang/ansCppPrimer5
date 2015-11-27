/*
 * =====================================================================================
 *
 *       Filename:  50.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月26日 18时27分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 50.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月26日 星期四 18时27分46秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<vector>

using namespace std;
int main ( int argc, char *argv[] )
{
	vector<string> svec{
		"123", "234", "567"
	};
	int total = 0;
	for (auto s : svec)
	{
		total += stoi(s);
	}
	cout << total << endl;

	double dtotal = 0;
	for (auto s : svec)
	{
		dtotal += stod(s);
	}
	cout << dtotal << endl;
	return 0;

}				/* ----------  end of function main  ---------- */

