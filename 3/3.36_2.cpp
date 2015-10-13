/*
 * =====================================================================================
 *
 *       Filename:  3.36_2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 20时34分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.36_2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 20时34分06秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<int> ivec1{
		1, 2, 3, 4
	}, ivec2;

	int i2;
	while(cin>>i2)
	{
		ivec2.push_back(i2);
	}

	if(ivec1 == ivec2)
		cout<< "ivec1 == ivec2" <<endl;
	else 
		cout<< "ivec1 != ivec2" <<endl;

	return 0;
}				/* ----------  end of function main  ---------- */

