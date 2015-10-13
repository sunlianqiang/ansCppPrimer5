/*
 * =====================================================================================
 *
 *       Filename:  3.31.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 17时46分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.31.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 17时46分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main ( int argc, char *argv[] )
{
	unsigned iarr[10] ={};
	for(unsigned i=0; i<10; ++i)
	{
		iarr[i] = i;
	}

	for(auto i:iarr)
		cout<< i << " ";
	cout<<endl;

	unsigned iarr2[10] = {};
	for(unsigned i=0; i<10; ++i)
	{
		iarr2[i] = iarr[i];
	}

	for(auto i:iarr2)
		cout<< i << " ";
	cout<<endl;


	return 0;
}				/* ----------  end of function main  ---------- */
