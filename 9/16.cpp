/*
 * =====================================================================================
 *
 *       Filename:  15.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月19日 18时20分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 15.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月19日 星期四 18时20分39秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<list>
using namespace std;

bool equal(const vector<int> &ivec, const list<int> &ilist)
{
	if (ivec.size() != ilist.size())
		return false;
	auto it1 = ivec.cbegin();
	auto it2 = ilist.cbegin();
	while ( it1 != ivec.end() && it2 != ilist.end())
	{
		if ( *it1 != *it2)
			return false;

		++it1;
		++it2;
	}

	return true;
}
int main ( int argc, char *argv[] )
{
	vector<int> ivec1{
		1, 3, 5
	};
	list<int> ilist{
		1, 3, 5
	};

	if (equal(ivec1, ilist)) 
		cout << "ivec1 == ilist" << endl;
	else
		cout << "ivec1 != ilist" << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
