/*
 * =====================================================================================
 *
 *       Filename:  9.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月12日 13时50分12秒
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
    > Created Time: 2015年12月12日 星期六 13时50分12秒
 ************************************************************************/

#include<iostream>
#include	<map>
#include	<list>
#include	<string>
#include	<fstream>
#include	<sstream>
using namespace std;

string & trans (string &s)
{
	for (decltype(s.size()) i = 0; i < s.size(); ++i)
	{
		if (ispunct(s[i]))
			s.erase(i);
		else if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}
	return s;
}		/* -----  end of function trans  ----- */
int main ( int argc, char *argv[] )
{
	ifstream is(argv[1]);
	if (!is)
	{
		cerr << "open file error!" << endl;
	}

    map<string, list<unsigned>> wordmap;
	string line;
	unsigned line_no = 0;
	string word;
	while (getline(is, line))
	{
		++line_no;
		istringstream l_in(line);
		while (l_in >> word)
		{
			trans(word);
			wordmap[word].push_back(line_no);
		}
	}

	for (auto & word : wordmap)
	{
		cout << "word: " << word.first << endl;
		cout << "line: ";
		for (auto l : word.second)
		{
			cout << l << " ";
		}
		cout << endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */
