/*
 * =====================================================================================
 *
 *       Filename:  26.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月23日 18时56分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 26.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月23日 星期一 18时56分39秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<list>
using namespace std;

int main ( int argc, char *argv[] )
{
	int ia[] = {
		0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89
	};

	vector<int> ivec(begin(ia), end(ia));
	list<int> ilst(begin(ia), end(ia));
	cout << "list: ";
	for (auto i : ilst)
		cout << i << ", ";
	cout << endl;

	cout << "vector: ";
	for (auto i : ivec)
		cout << i << ", ";
	cout << endl;

	auto it = ivec.begin(); 
	while(it != ivec.end()) 
	{
		if (0 == *it % 2)
			it = ivec.erase(it);
		else
			++it;
	}

	auto it2 = ilst.begin(); 
	while(it2 != ilst.end()) 
	{
		if (0 != *it2 % 2)
			it2 = ilst.erase(it2);
		else
			++it2;
	}


	cout << "list: ";
	for (auto i : ilst)
		cout << i << ", ";
	cout << endl;

	cout << "vector: ";
	for (auto i : ivec)
		cout << i << ", ";
	cout << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
