/*
 * =====================================================================================
 *
 *       Filename:  3.35.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 18时53分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.35.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 18时53分10秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main ( int argc, char *argv[] )
{
	int iarr[5] = {1, 2, 3, 4, 5};

	for(int* i=begin(iarr); i!=end(iarr); ++i)
	{
		*i = 0;
	}

	for(int* i=begin(iarr); i!=end(iarr); ++i)
		cout<< *i << " ";
	cout<<endl;

	return 0;
}				/* ----------  end of function main  ---------- */

