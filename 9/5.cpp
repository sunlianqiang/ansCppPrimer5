/*
 * =====================================================================================
 *
 *       Filename:  4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月19日 14时50分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 4.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月19日 星期四 14时50分52秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;

vector<int>::iterator findint (vector<int>::iterator begin, vector<int>::iterator end, int i1)
{
	for (auto it = begin; it != end; ++it)
	{
		if (i1 == *it)
			return it;
	}
	return end;
}		/* -----  end of function findint  ----- */
int main ( int argc, char *argv[] )
{
	vector<int> ivec = {
		1, 3, 5, 7, 9
	};

	cout << "find 2: ";
	if (ivec.end() !=findint(ivec.begin(), ivec.end(), 2) )
	{
		cout << true << endl;
	}
	else
		cout << false << endl;
	cout << "find 3: ";
	if (ivec.end() !=findint(ivec.begin(), ivec.end(), 3) )
	{
		cout << true << endl;
	}
	else
		cout << false << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
