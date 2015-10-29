/*
 * =====================================================================================
 *
 *       Filename:  6.27.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 12时25分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.27.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 12时25分10秒
 ************************************************************************/

#include<iostream>
#include	<initializer_list>
using namespace std;

int add(initializer_list<int> il)
{
	int sum = 0;
	for(auto ilt:il)
		sum += ilt;

	return sum;
}
int main ( int argc, char *argv[] )
{
	cout << add({
			1, 2, 3, 4
			}) << endl;
	return 0;
}				/* ----------  end of function main  ---------- */

