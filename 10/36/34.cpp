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
#include	<algorithm>
#include	<vector>
#include	<iterator>
#include	<stack>
#include	<list>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> iv{
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	list<int> il(iv.crbegin() + iv.size() - 7, iv.crbegin() + iv.size() -3 + 1);
	ostream_iterator<int> out_it(cout, " ");
	copy(il.begin(), il.end(), out_it);
	cout << endl;
	cout << il.size() << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
