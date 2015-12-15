/*
 * =====================================================================================
 *
 *       Filename:  3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月11日 17时42分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月11日 星期五 17时42分20秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include	<map>
#include	<string>
#include	<set>
using namespace std;

int main ( int argc, char *argv[] )
{
	map<string, size_t> word_count;
	set<string> exclude = {
		"The", "But", "And", "Or", "An", "A",
		"the", "but", "and", "or", "an", "a",
	};
	set<char> biaodian = {
		',', '.'
	};
	string word;
	ifstream in("input");
	while(in >> word)
	{
		if ( isupper(word.at(0)) )
			word[0] = tolower(word[0]);

		for (decltype(word.size()) i = 0; i < word.size(); ++ i)
			if ( biaodian.find(word[i]) != biaodian.end())
				word.erase(i);

		if (exclude.find(word) == exclude.end())
			++word_count[word];
	}

	for (const auto &w : word_count)
	cout << w.first << " occurs " << w.second
		<< ((w.second > 1) ? " times" : " time") << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
