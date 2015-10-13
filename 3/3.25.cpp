/*
 * =====================================================================================
 *
 *       Filename:  3.25.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 16时30分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.25.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 16时30分10秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<int> ivec{
		42,65,95,100,39,67,95,76,88,76,83,92,76,93
	};
	vector<int> scores(11, 0);

	for(auto it=ivec.begin(); it!=ivec.end(); ++it)
	{
		++scores[ (*it)/10 ];
	}

	for(auto i:scores)
	{
		cout<< i << " ";
	}
	cout<<endl;

	return 0;
}				/* ----------  end of function main  ---------- */


