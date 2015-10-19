/*
 * =====================================================================================
 *
 *       Filename:  4.21.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月14日 16时08分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 4/4.21.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月14日 星期三 16时08分25秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> ivec{
		1, 2, 3, 4
	};

	for(auto &i:ivec)
	{
		if( 0 != i%2)
		{
			i *= 2;
		}
	}

	for(auto i:ivec)
		cout << i << " ";
	cout<<endl;

	return 0;
}				/* ----------  end of function main  ---------- */
