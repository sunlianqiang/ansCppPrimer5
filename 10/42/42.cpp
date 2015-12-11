/*
 * =====================================================================================
 *
 *       Filename:  42.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月10日 23时20分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 42.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月10日 星期四 23时20分57秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<list>
#include	<algorithm>
using namespace std;

void output (vector<string> sv, string log)
{
	cout << log;
	for (auto str : sv)	
		cout << str << " ";
	cout << endl;
	return ;
}		/* -----  end of function output  ----- */
void output (list<string> sv, string log)
{
	cout << log;
	for (auto str : sv)	
		cout << str << " ";
	cout << endl;
	return ;
}		/* -----  end of function output  ----- */
void elimDups (list<string> &words)
{
	output(words, "before sort: ");
	words.sort();
	output(words, "after sort: ");

	words.unique();
	output(words, "after unique: ");
	return ;
}		/* -----  end of function elimDups  ----- */

void elimDups (vector<string> &words)
{
	output(words, "before sort: ");
	sort(words.begin(), words.end());
	output(words, "after sort: ");

	auto end_unique = unique(words.begin(), words.end());
	output(words, "after unique: ");
	words.erase(end_unique, words.end());
	output(words, "after erase: ");
	return ;
}		/* -----  end of function elimDups  ----- */

int main ( int argc, char *argv[] )
{
	vector<string> sv{
		"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
	};

	elimDups(sv);

	cout << "list:" << endl;
	list<string> lv{
		"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
	};
	elimDups(lv);
	return 0;
}				/* ----------  end of function main  ---------- */
