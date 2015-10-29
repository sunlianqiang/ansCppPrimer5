/*
 * =====================================================================================
 *
 *       Filename:  6.5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 16时14分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.5.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 16时14分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  abs
 *  Description:  
 * =====================================================================================
 */
	void
abs (int i)
{
	if(i>0)
		cout << i << endl;
	else
		cout << -i << endl;
	return ;
}		/* -----  end of function abs  ----- */


int main ( int argc, char *argv[] )
{
	int i;
	while(cin>>i)
		abs(i);

	return 0;
}				/* ----------  end of function main  ---------- */
