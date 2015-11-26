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
#include	<fstream>
using namespace std;

struct PersonInfo{
	string name;
	vector<string> phones;
};
bool valid(string nums)
{
	if (nums.size() > 4)
		return false;
	else 
		return true;
}
string format(string nums)
{
	return (nums + "+");
}
int main ( int argc, char *argv[] )
{
	string line, word;
	vector<PersonInfo> people;
	ifstream input(argv[1]);

	while (getline(input, line))
	{
		PersonInfo info;
		istringstream record;
		//record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	for (const auto &entry : people)
	{
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones)
		{
			if (!valid(nums))
			{
				badNums << " "  << nums;
			}
			else
				formatted << " " << format(nums);
		}

		if (badNums.str().empty())
		{
			cout << entry.name << " "
				<< formatted.str() << endl;
		}
		else
			cerr << "input error: " << entry.name
				<< " invalid number(s) " << badNums.str() << endl;
	}
	/*
	for (auto& person : people)
	{
		cout << "name: " << person.name <<endl;
		for (auto &phone : person.phones)
		{
			cout << "phone: " << phone << ", ";
		}
		cout << endl;
	}
	*/
	return 0;
}				/* ----------  end of function main  ---------- */

