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
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> iv{
		1, 2, 2, 3, 3, 4
	};

	vector<int> iv2;

	unique_copy(iv.begin(), iv.end(), inserter(iv2, iv2.begin()));
	//unique_copy(iv.begin(), iv.end(), inserter(iv2, iv2.end()));

	for (auto it = iv2.begin(); it != iv2.end(); ++it)
		cout << *it << ", ";
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
