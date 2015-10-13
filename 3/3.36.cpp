/*
 * =====================================================================================
 *
 *       Filename:  3.36.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 20时18分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.36.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 20时18分34秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main ( int argc, char *argv[] )
{
	int iarr1[] = {
		1, 2, 3, 4
	};
	int iarr2[] = {
		1, 2, 3, 4 
	};
	
	auto arrlen1 = end(iarr1) - begin(iarr1);
	auto arrlen2 = end(iarr2) - begin(iarr2);

	if( arrlen1 != arrlen2)
	{
		cout << "arr1 != arr2" <<endl;
		return -1;
	}
	for(decltype(arrlen1) i1=0; i1!=arrlen1; ++i1)
	{
		if( iarr1[i1] != iarr2[i1] )
		{
			cout << "arr1 != arr2" <<endl;
			return -1;
		}
	}
	cout << "arr1 == arr2" <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */

