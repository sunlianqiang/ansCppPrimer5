/*
 * =====================================================================================
 *
 *       Filename:  3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月30日 16时40分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月30日 星期一 16时40分30秒
 ************************************************************************/

#include<iostream>
#include	<algorithm>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<int> iv{
		1, 2, 3, 4, 5, 6, 7, 8, 9
	};

	unsigned sum = accumulate(iv.cbegin(), iv.cend(), 0);
	cout << "sum is: " << sum << endl;
	return 0;
}				/* ----------  end of function main  ---------- */

