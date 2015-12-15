/*
 * =====================================================================================
 *
 *       Filename:  7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月11日 21时05分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 7.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月11日 星期五 21时05分59秒
 ************************************************************************/

#include<iostream>
#include	<map>
#include	<vector>
#include	<string>
using namespace std;

static unsigned count = 0;
void output (const multimap<string, string> &families  )
{
	cout << "output " << ++count << endl;
	for (auto &family : families)
	{
		cout << "first name: " << family.first << endl;
		cout << "last name : " << family.second << endl;
	}
	return ;
}		/* -----  end of function output  ----- */

int main ( int argc, char *argv[] )
{
	multimap<string, string> families = {
		{
			"Sun", "lianqiang"
		},
		{
			"Sun", "lianjie"
		},
		{
			"Liu", "Xin"
		},
		{
			"Liu", "Neng"
		}
	};

	output(families);
	families.insert({
			"zhang", "Li"
			});
	families.insert({
			"zhang", "Li"
			});
	families.insert({
			"zhang", "Li"
			});
	output(families);
	return 0;
}				/* ----------  end of function main  ---------- */
