/*
 * =====================================================================================
 *
 *       Filename:  TextQuery.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月05日 22时35分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: TextQuery.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年01月05日 星期二 22时35分03秒
 ************************************************************************/

#include<iostream>
#include	"TextQuery.h"
using namespace std;

TextQuery::TextQuery(ifstream &infile)
{
	string line;
	unsigned linenum = 1;
	while (getline(infile, line))
	{
		lines[linenum] = line;
		++linenum;

		stringstream ss(line);
		string word;
		while (ss >> word)
		{
			//words[word].insert(linenum);
			if (words.find(word) != words.end())
			{
				words[word]->insert(linenum);
			}
			else
			{
				words[word] = make_shared<set<unsigned>>();
				words[word]->insert(linenum);
			}
		}
	}
}

shared_ptr<set<unsigned>> TextQuery::query (string word)
{
	if (words.find(word) != words.end())
		return words[word];
	else
		return nullptr;
}		/* -----  end of function query  ----- */


ostream& QueryResult::print (ostream &out, shared_ptr<set<unsigned>> p)
{
	if (p != nullptr )
	{
		for (auto i : *p)
		{
			out << i << " "; 
		}
	}

	return out;
}		/* -----  end of function print  ----- */
