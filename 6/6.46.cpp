/*
 * =====================================================================================
 *
 *       Filename:  6.44.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 18时49分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.44.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 18时49分47秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

constexpr bool isShorter (const string &s1, const string &s2  )
{
	return s1.size() < s2.size();
}		/* -----  end of function isShorter  ----- */


int main ( int argc, char *argv[] )
{
	cout << isShorter("abcd", "abc") << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
