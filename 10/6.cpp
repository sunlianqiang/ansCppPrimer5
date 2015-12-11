/*
 * =====================================================================================
 *
 *       Filename:  6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月30日 17时00分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月30日 星期一 17时00分07秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	int ia[] = {
		1, 3, 4, 5
	};

	fill_n(begin(ia), 4, 0);

	for (auto i : ia)
		cout << i << " ";
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */

