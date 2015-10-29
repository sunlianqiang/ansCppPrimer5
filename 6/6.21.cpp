/*
 * =====================================================================================
 *
 *       Filename:  6.21.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 11时01分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.21.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 11时01分55秒
 ************************************************************************/

#include<iostream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  compare
 *  Description:  
 * =====================================================================================
 */
int compare (const int a, const int *b)
{
	if (a>*b)
		return a;
	else
		return *b;
}		/* -----  end of function compare  ----- */
int main ( int argc, char *argv[] )
{
	int i1 = 3, i2 = 5;
	int *pi = &i2;
	cout << compare(i1, pi) <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
