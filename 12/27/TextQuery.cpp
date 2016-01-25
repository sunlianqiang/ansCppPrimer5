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
#include<algorithm>
#include<sstream>
#include	"TextQuery.h"
using namespace std;

TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
	//LineNo LineNo {0};
	string text;
	while (getline(is, text))
	{
		file->push_back(text);
		int n = file->size() - 1;

		istringstream line(text);
		string word;
		while (line >> word)
		{
			auto &lines = wm[word];
			if (!lines)
				lines.reset(new set<LineNo>);
			lines->insert(n);
		}
	}
}

QueryResult TextQuery::query (const string &str) const
{
	static shared_ptr<std::set<LineNo>> nodate(new std::set<LineNo>);
	auto found = wm.find(str);
	if (found == wm.end())
		return QueryResult(str, nodate, file);
	else
		return QueryResult(str, found->second, file);
}		/* -----  end of function query  ----- */


ostream& print (ostream &os, const QueryResult& qr)
{
	cout << qr.sought << " occurs " << qr.lines->size() << " times" << endl;
	for (auto linenum : *(qr.lines))
	{
		os << "( line " << linenum + 1 << " ) " << *(qr.file->begin() + linenum) << endl;
	}

	return os;
}		/* -----  end of function print  ----- */
