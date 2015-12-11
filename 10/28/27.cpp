/*
 * =====================================================================================
 *
 *       Filename:  27.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月08日 11时14分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 27.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月08日 星期二 11时14分21秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<algorithm>
#include	<list>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> iv{
		1, 2, 3, 4, 5, 6, 7, 8, 9
	};

	list<int> lst1;
	vector<int> iv2, iv3;

	copy(iv.begin(), iv.end(), front_inserter(lst1));
	copy(iv.begin(), iv.end(), inserter(iv2, iv2.begin()));
	copy(iv.begin(), iv.end(), back_inserter(iv3));
	//unique_copy(iv.begin(), iv.end(), inserter(iv2, iv2.end()));

	for (auto it = lst1.begin(); it != lst1.end(); ++it)
		cout << *it << ", ";
	cout << endl;
	for (auto it = iv2.begin(); it != iv2.end(); ++it)
		cout << *it << ", ";
	cout << endl;
	for (auto it = iv3.begin(); it != iv3.end(); ++it)
		cout << *it << ", ";
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
