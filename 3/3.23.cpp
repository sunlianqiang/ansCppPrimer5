/*
 * =====================================================================================
 *
 *       Filename:  3.23.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 14时49分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.23.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 14时49分19秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<int> ivec;
	for(auto i=0; i<10; ++i)
	{
		ivec.push_back(i);
	}

	for(auto it=ivec.begin(); it!=ivec.end(); ++it)
	{
		*it *=2;
	}
	for(auto i:ivec)
	{
		cout<< i << " ";
	}
	cout<<endl;

	return 0;
}				/* ----------  end of function main  ---------- */

