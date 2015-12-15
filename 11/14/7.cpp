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

int main ( int argc, char *argv[] )
{
	map<string, vector<pair<string, string>>> families = {
		{
			"Sun", {
				make_pair("lianqiang","1988"), make_pair("lianjie", "1990")
			}
		},
		{
			"Liu", {
				make_pair("Xin", "1983"), make_pair("Neng", "1978")
			}
		}
	};

	for (auto &family : families)
	{
		cout << "first name: " << family.first << endl;
		cout << "last name : ";
		for (auto name : family.second)
		{
			cout << name.first << " birthday: " << name.second << endl;
		}
		cout << endl;
	}
	families["zhang"] = {
		make_pair("Li", "1983") 
	};

	for (auto &family : families)
	{
		cout << "first name: " << family.first << endl;
		cout << "last name : ";
		for (auto name : family.second)
		{
			cout << name.first << " , birthday: " << name.second << endl;
		}
		cout << endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */
