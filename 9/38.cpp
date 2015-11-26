/*
 * =====================================================================================
 *
 *       Filename:  38.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月26日 11时17分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 38.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月26日 星期四 11时17分07秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	unsigned cap = 0;
	vector<int> vi;
	for (decltype(vi.size()) i = 0; i < 300; ++i)
	{
		vi.push_back(i);
		if (cap < vi.capacity())
		{
			cap = vi.capacity();
			cout << cap << ", ";
		}
	}
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */

