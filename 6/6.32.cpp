/*
 * =====================================================================================
 *
 *       Filename:  6.32.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 15时23分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.32.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 15时23分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

int &get (int *array, int index)
{
	return array[index];
}		/* -----  end of function get  ----- */
int main ( int argc, char *argv[] )
{
	int ia[10];
	for(int i=0; i<10; ++i)
	{
		get(ia,i) = i;
		cout << get(ia, i) << " ";

	}
	cout << endl;

	
	return 0;
}				/* ----------  end of function main  ---------- */
