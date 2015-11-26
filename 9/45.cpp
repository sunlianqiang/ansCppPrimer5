/*
 * =====================================================================================
 *
 *       Filename:  45.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月26日 15时33分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 45.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月26日 星期四 15时33分10秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;
string& addstr (string &s, const string prefix, const string endfix)
{
	s.insert(0, prefix + " ");
	s.append(" " + endfix);
	return s;
}		/* -----  end of function addstr  ----- */
int main ( int argc, char *argv[] )
{
	string s("Lianqiang Sun");
	addstr(s, "Mr.", "Jr.");
	
	cout << s << endl;
	return 0;
}				/* ----------  end of function main  ---------- */

