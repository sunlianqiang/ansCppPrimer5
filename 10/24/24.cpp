/*
 * =====================================================================================
 *
 *       Filename:  24.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月02日 15时28分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 24.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月02日 星期三 15时28分40秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<functional>
#include	<vector>
#include	<algorithm>
using namespace std;
using namespace std::placeholders;

bool check_size (const string &s, string::size_type sz);

void biggies (vector<int> &iv, const string &s)
{
	auto it = find_if(iv.begin(), iv.end(), 
			bind(check_size, s, _1));
	cout << "第" << it - iv.begin() + 1 << "个数的值:" << *it << "大于string:" << s << "的长度" << endl;

	return ;
}		/* -----  end of function biggies  ----- */
bool check_size (const string &s, string::size_type sz)
{
	return s.size() < sz;
}		/* -----  end of function check_size  ----- */
int main ( int argc, char *argv[] )
{
	string str("12345");
	vector<int> iv{
		1, 2, 3, 4, 5, 6, 7
	};

	biggies(iv, str);

	return 0;
}				/* ----------  end of function main  ---------- */
