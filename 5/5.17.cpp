/*
 * =====================================================================================
 *
 *       Filename:  5.17.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 10时47分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 5/5.17.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 10时47分20秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<int> ivec1{
		0, 1, 1, 2
	};
	vector<int> ivec2{
		0, 1, 1, 2, 3, 5, 8
	};

	for(auto it1 = ivec1.begin(), it2 =ivec2.begin(); it1!=ivec1.end() && it2!=ivec2.end(); ++it1, ++it2)
	{
		if(*it1 != *it2)
		{
			cout << "not prefix!" <<endl;
			return -1;
		}
	}
	cout << "yes, prefix!" <<endl;

	return 0;
}				/* ----------  end of function main  ---------- */

