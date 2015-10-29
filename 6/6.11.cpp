/*
 * =====================================================================================
 *
 *       Filename:  6.11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 18时37分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.11.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 18时37分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

	int
reset (int &i)
{
	i = 0;
	return i;
}		/* -----  end of function reset  ----- */
int main ( int argc, char *argv[] )
{
	int i = 42;
	cout << reset(i) <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
