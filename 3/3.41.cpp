/*
 * =====================================================================================
 *
 *       Filename:  3.41.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 21时16分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.41.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 21时16分07秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	int iarr[] = {
		1, 2, 3, 4
	};
	vector<int> ivec(begin(iarr), end(iarr));
	
	for(auto i:ivec)
		cout<< i << " ";
	cout<<endl;


	return 0;
}				/* ----------  end of function main  ---------- */
