/*
 * =====================================================================================
 *
 *       Filename:  3.20.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 10时24分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.20.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 10时24分48秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<string>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> ivec;
	int i1, i2;

	while(cin>>i1>>i2)
	{
		i1+=i2;
		cout<< i1 <<endl;
	}
	
	return 0;
}				/* ----------  end of function main  ---------- */
