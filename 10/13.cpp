/*
 * =====================================================================================
 *
 *       Filename:  13.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月01日 17时57分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 13.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月01日 星期二 17时57分31秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<algorithm>
using namespace std;
bool wordpart (const string &word)
{
	return word.size() >= 5;
}		/* -----  end of function wordpart  ----- */


int main ( int argc, char *argv[] )
{
	vector<string> vs{
		"12345", "123", "123456", "1234"
	};
	auto it = partition(vs.begin(), vs.end(), wordpart);
	for (auto it2 = vs.cbegin(); it2 != it; ++it2)
		cout << *it2 << ", ";
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
