/*
 * =====================================================================================
 *
 *       Filename:  6.23.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 11时16分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.23.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 11时16分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  print
 *  Description:  
 * =====================================================================================
 */
void print (const int *pi)
{
	cout << *pi <<endl;
	return ;
}		/* -----  end of function print  ----- */

void print1 (const int *beg, const int *end)
{
	while(beg != end)
	{
		cout << *beg++ << " ";
	}
	cout << endl;
	return ;
}		/* -----  end of function print1  ----- */
int main ( int argc, char *argv[] )
{
	int i = 0, j[2] = {
		0, 1
	};

	print(&i);
	print1(begin(j), end(j));

	return 0;
}				/* ----------  end of function main  ---------- */
