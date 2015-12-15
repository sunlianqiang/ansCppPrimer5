/*
 * =====================================================================================
 *
 *       Filename:  12.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月12日 19时41分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 12.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月12日 星期六 19时41分28秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<vector>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<string> vs{
		"ab", "abc", "abcd"
	};
	vector<int> vi{
		1, 2, 3, 4
	};
	vector<pair<string, int> > pv;
	for (decltype(vs.size()) i = 0; i < vs.size() && i < vi.size(); ++i)
	pv.push_back({
		vs[i], vi[i]
			});

	for (auto p : pv)
	{
		cout << "first: " << p.first << ", second: " << p.second << endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */

