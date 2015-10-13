/*
 * =====================================================================================
 *
 *       Filename:  3.14.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月12日 18时35分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.14.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月12日 星期一 18时35分47秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> ivec;
	int i;
	while(cin>>i)
	{
		ivec.push_back(i);
	}

	for(auto i1 : ivec)
	{
		cout<< i1 <<endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */
