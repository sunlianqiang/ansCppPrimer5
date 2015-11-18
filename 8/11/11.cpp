/*
 * =====================================================================================
 *
 *       Filename:  11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月18日 21时08分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 11.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月18日 星期三 21时08分00秒
 ************************************************************************/

#include<iostream>
#include	<sstream>
#include	<string>
#include	<vector>
using namespace std;

struct PersonInfo{
	string name;
	vector<string> phones;
};
int main ( int argc, char *argv[] )
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;

	while (getline(cin, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	for (auto& person : people)
	{
		cout << "name: " << person.name <<endl;
		for (auto &phone : person.phones)
		{
			cout << "phone: " << phone << ", ";
		}
		cout << endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */

