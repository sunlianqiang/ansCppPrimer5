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
	cout << log << endl;
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
string make_plural (unsigned count, string word, string s)
{
	if (count > 1)
		return word + s;
	else
		return word;
}		/* -----  end of function make_plural  ----- */


bool less6 (string &s)
{
	if (s.size() <= 6)
		return true;
	else
		return false;
}		/* -----  end of function less6  ----- */
void biggies (vector<string> &words,
		vector<string>::size_type sz)
{
	elimDups(words);
	output(words, "after elimDups: ");
	stable_sort(words.begin(), words.end(),
			[](const string &a, const string &b){
			return a.size() < b.size();
			});
	output(words, "after stable_sort ");

	auto it = stable_partition(words.begin(), words.end(), 
			[sz](const string &a){
			return a.size() > sz;
			});
	output(words, "after partition");

	auto count = it - words.begin();
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;

	for_each(words.begin(), it,
			[](const string &s){
			cout << s << " ";
			});
	cout << endl;

	auto count2 = count_if(words.begin(), words.end(),
			[](const string &s){
			return s.size() >= 6;
			});
	cout << count2 << " " << make_plural(count2, "word", "s")
		<< " of length 6 " << " or longer" << endl;

	auto count3 = count_if(words.begin(), words.end(),
			less6);
	cout << count3 << " " << make_plural(count3, "word", "s")
		<< " of length 6 " << " or lesser" << endl;

	return ;
}		/* -----  end of function biggies  ----- */
int main ( int argc, char *argv[] )
{
	vector<string> sv{
		"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
	};

	biggies(sv, 5);
	return 0;
}				/* ----------  end of function main  ---------- */

