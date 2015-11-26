/*
 * =====================================================================================
 *
 *       Filename:  25.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月23日 18时52分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 25.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月23日 星期一 18时52分02秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<list>
using namespace std;

int main ( int argc, char *argv[] )
{
	list<int> ilst = {
		1, 2, 3, 4, 5, 6
	};

	//ilst.erase(ilst.end());
	ilst.erase(ilst.end(), ilst.end());

	for (auto i : ilst)
		cout << ", " << i;
	return 0;
}				/* ----------  end of function main  ---------- */

