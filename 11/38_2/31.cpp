/*
 * =====================================================================================
 *
 *       Filename:  31.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月15日 14时54分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 31.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月15日 星期二 14时54分27秒
 ************************************************************************/

#include<iostream>
#include	<unordered_map>
#include	<string>
using namespace std;

static unsigned count = 0;
void output (const unordered_multimap<string, string> &books  )
{
	cout << "output " << ++count << endl;
	for (auto &book : books)
	{
		cout << book.first << ", book: " << book.second << endl;
	}
	return ;
}		/* -----  end of function output  ----- */
int main ( int argc, char *argv[] )
{
	unordered_multimap<string, string> books = {
		{
			"slq", "slq1"
		},
		{
			"slq", "slq2"
		},
		{
			"zh", "zh1"
		}
	};
	output(books);

	if (books.find("slq") != books.end())
		books.erase("slq");
	else
		cout << "no author" << endl;
	output(books);
	return 0;
}				/* ----------  end of function main  ---------- */
