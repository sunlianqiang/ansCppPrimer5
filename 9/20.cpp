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
#include	<deque>
#include	<list>
using namespace std;

int main ( int argc, char *argv[] )
{
	list<int> ilist{
		1, 2, 3, 4, 5, 6
	};
	deque<int> idq_odd, idq_ou;

	for (auto i : ilist)
	{
		if (i % 2 == 0)
		{
			idq_odd.emplace_back(i);
		}
		else
			idq_ou.emplace_back(i);
	}

	cout << "idq_odd: ";
	for (auto i : idq_odd)
	{
		cout << ", " << i;
	}
	cout << endl;

	cout << "idq_ou: ";
	for (auto i : idq_ou)
	{
		cout << ", " << i;
	}
	cout << endl;
	return 0;
}				/* ----------  end of function main  ---------- */

