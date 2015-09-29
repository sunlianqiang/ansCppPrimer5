/*
 * =====================================================================================
 *
 *       Filename:  1.16.cpp
 *
 *    Description:  sum of nums
 *
 *        Version:  1.0
 *        Created:  2015年09月28日 21时42分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 1/1.16.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年09月28日 星期一 21时42分12秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define  EXIT_SUCCESS 0

	int
main ( int argc, char *argv[] )
{
	int num, sum;
	cout << num << sum <<endl;
	cout << "pls input nums:" <<endl;
	while(cin>>num)
	{
		sum+=num;
	}
	cout<<"sum of nums is: " << sum <<endl;
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
