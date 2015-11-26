/*
 * =====================================================================================
 *
 *       Filename:  13.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月19日 17时05分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 13.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月19日 星期四 17时05分51秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<list>
using namespace std;

int main ( int argc, char *argv[] )
{
	list<int> ilist = {
		1, 2, 3, 4
	};

	vector<double> dvec(ilist.begin(), ilist.end());

	cout << "dvec: ";
	for (auto d : dvec)
	{
		cout << d << ", ";
	}
	cout << endl;
	
	vector<int> ivec = {
		2, 3, 4, 5
	};

	vector<double> dvec2(ivec.begin(), ivec.end());
	cout << "dvec2: ";
	for (auto d : dvec2)
	{
		cout << d << ", ";
	}
	cout << endl;


	return 0;
}				/* ----------  end of function main  ---------- */
