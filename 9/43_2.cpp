/*
 * =====================================================================================
 *
 *       Filename:  43.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月26日 14时55分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 43.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月26日 星期四 14时55分46秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;
void sreplace (string &s, const string oldVal, const string newVal  )
{
	auto pos = s.find(oldVal);
	while (pos != string::npos)
	{
		s.replace(pos, oldVal.size(), newVal);
		pos = s.find(s, pos + newVal.size());
	}
	return ;
}		/* -----  end of function sreplace  ----- */
int main ( int argc, char *argv[] )
{
	string s1("thothruslq");
	cout << s1 << endl;
	sreplace(s1, "tho", "though");
	sreplace(s1, "thru", "through");

	cout << s1 << endl;
	return 0;
}				/* ----------  end of function main  ---------- */

