/*
 * =====================================================================================
 *
 *       Filename:  6.22.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 11时07分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.22.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 11时07分22秒
 ************************************************************************/

#include<iostream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  swapptr
 *  Description:  
 * =====================================================================================
 */
void swapptr (int **pp1, int **pp2)
{
	int *pt;
	pt = *pp1;
	*pp1 = *pp2;
	*pp2 = pt;
	cout << *pp1 << " " << *pp2 <<endl;
	return ;
}		/* -----  end of function swapptr  ----- */
int main ( int argc, char *argv[] )
{
	int i1 = 3, i2 = 5;
	int *p1 = &i1, *p2 = &i2;
	cout << p1 << " " << p2 <<endl;
	swapptr(&p1, &p2);

	cout << p1 << " " << p2 <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
