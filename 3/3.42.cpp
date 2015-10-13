/*
 * =====================================================================================
 *
 *       Filename:  3.42.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 21时19分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.42.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 21时19分16秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<int> ivec{
		1, 2, 3, 4
	};
	int iarr[4];

	auto iarrlen = end(iarr) - begin(iarr);
	for(size_t i=0; i!=iarrlen; ++i)
	{
		iarr[i] = ivec[i];
	}

	for(int *it=begin(iarr); it!=end(iarr); ++it)
		cout<< *it << " ";
	cout<< endl;

	return 0;
}				/* ----------  end of function main  ---------- */

