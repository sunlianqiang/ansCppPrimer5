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
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> ivec1{
		1, 3, 5
	};
	vector<int> ivec2{
		1, 3, 5
	};

	if (ivec1 == ivec2)
		cout << "ivec1 == ivec2" << endl;
	else
		cout << "ivec1 != ivec2" << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
