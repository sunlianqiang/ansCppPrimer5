/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月27日 19时03分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月27日 星期五 19时03分24秒
 ************************************************************************/

#include<iostream>
#include	<algorithm>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<int> iv{
		1, 2, 3, 4, 5, 6, 5, 5, 5,5
	};
	unsigned icount = count(iv.begin(), iv.end(), 5);
	cout << icount << endl;
	return 0;
}				/* ----------  end of function main  ---------- */

