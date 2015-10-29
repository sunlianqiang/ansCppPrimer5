/*
 * =====================================================================================
 *
 *       Filename:  6.12.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 18时39分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.12.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 18时39分02秒
 ************************************************************************/

#include<iostream>
using namespace std;

	void
swap (int &i, int &j)
{
	int tmp = i;
	i = j;
	j = tmp;
	return ;
}		/* -----  end of function swap  ----- */
int main ( int argc, char *argv[] )
{
	int i = 3, j = 8;
	swap(i,j);
	cout << i << " " << j << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
