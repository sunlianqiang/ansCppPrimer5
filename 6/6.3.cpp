/*
 * =====================================================================================
 *
 *       Filename:  6.3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 16时07分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.3.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 16时07分05秒
 ************************************************************************/

#include<iostream>
using namespace std;

int fact(int i)
{
	int j = 1;
	while(i>1)
	{
		j *= i;
		--i;
	}
	return j;
}
int main ( int argc, char *argv[] )
{
	int i;
	int j;
	while(cin>>i)
	{
		j = fact(i);
		cout<< i << "! is " << j <<endl; 
	}
	return 0;
}				/* ----------  end of function main  ---------- */

