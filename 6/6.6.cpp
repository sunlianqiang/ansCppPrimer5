/*
 * =====================================================================================
 *
 *       Filename:  6.6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 16时40分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.6.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 16时40分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

	void
test ( int i )
{
	int j;
	static int k;

	cout << i << " " << j << " " << k << endl;
	return ;
}		/* -----  end of function test  ----- */

int main ( int argc, char *argv[] )
{
	test(5);
	return 0;
}				/* ----------  end of function main  ---------- */
