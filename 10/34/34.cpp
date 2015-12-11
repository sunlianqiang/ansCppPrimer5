/*
 * =====================================================================================
 *
 *       Filename:  34.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月08日 21时43分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 34.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月08日 星期二 21时43分46秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<iterator>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> iv{
		1, 2, 3, 4, 5
	};

	for (auto rit = iv.crbegin(); rit != iv.crend(); ++rit)
		cout << *rit << ", ";
	cout << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
