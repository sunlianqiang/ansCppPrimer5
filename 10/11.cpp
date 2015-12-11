/*
 * =====================================================================================
 *
 *       Filename:  9.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月30日 22时00分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
  > File Name: 9.cpp
  > Author: ma6174
  > Mail: ma6174@163.com 
  > Created Time: 2015年11月30日 星期一 22时00分05秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<string>
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
bool isShorter (const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}		/* -----  end of function isShorter  ----- */
void elimDups (vector<string> &words)
{
	output(words, "before sort: ");
	sort(words.begin(), words.end());
	output(words, "after sort: ");

	auto end_unique = unique(words.begin(), words.end());
	output(words, "after unique: ");
	words.erase(end_unique, words.end());
	output(words, "after erase: ");
	stable_sort(words.begin(), words.end(), isShorter);
	output(words, "after stable_sort: ");
	return ;
}		/* -----  end of function elimDups  ----- */
int main ( int argc, char *argv[] )
{
	vector<string> sv{
		"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
	};

	elimDups(sv);
	return 0;
}				/* ----------  end of function main  ---------- */

