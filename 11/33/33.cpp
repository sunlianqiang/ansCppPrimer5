/*
 * =====================================================================================
 *
 *       Filename:  33.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月15日 16时13分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 33.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月15日 星期二 16时13分55秒
 ************************************************************************/

#include<iostream>
#include	<map>
#include	<string>
#include	<fstream>
#include	<sstream>
using namespace std;
map<string, string> buildMap (ifstream &map_file)
{
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file >> key && getline(map_file, value)) {
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for " + key);
	}
	return trans_map;
}		/* -----  end of function buildMap  ----- */

const string & transform (const string &s, const map<string, string> &m)
{
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second;
	else
		return s;
}		/* -----  end of function transform  ----- */

void word_transform (ifstream &map_file, ifstream &input)
{
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input, text)) {
		istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word) {
			if (firstword)
				firstword = false;
			else
				cout << " ";

			cout << transform(word, trans_map);
		}
		cout << endl;
	}
	return ;
}		/* -----  end of function word_transform  ----- */
int main ( int argc, char *argv[] )
{
	if (argc != 3)
		cerr << "argc error!" << endl;
	ifstream is1(argv[1]);
	ifstream is2(argv[2]);
	word_transform(is1, is2);
	return 0;
}				/* ----------  end of function main  ---------- */

