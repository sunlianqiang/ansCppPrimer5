/*
 * =====================================================================================
 *
 *       Filename:  18.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月23日 15时14分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 18.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月23日 星期一 15时14分24秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<list>
using namespace std;

int main ( int argc, char *argv[] )
{
	list<string> sdq;
	string str;
	while (cin >> str)
	{
		sdq.emplace_back(str);
	}

	for (auto &s : sdq)
	{
		cout << ", word: " << s;
	}
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */

