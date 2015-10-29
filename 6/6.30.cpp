/*
 * =====================================================================================
 *
 *       Filename:  6.30.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 15时15分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.30.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 15时15分00秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

bool str_subrange (const string &str1, const string &str2  )
{
	if (str1.size() == str2.size())
		return str1 == str2;

	auto size = (str1.size() < str2.size())
			?str1.size() : str2.size();

	for(decltype(size) i = 0; i != size; ++i)
	{
		if(str1[i] != str2[i])
			return;
	}
	return ;
}		/* -----  end of function str_subrange  ----- */
int main ( int argc, char *argv[] )
{
	string s1 = "aab", s2 = "abc";
	str_subrange(s1, s2);
	return 0;
}				/* ----------  end of function main  ---------- */
