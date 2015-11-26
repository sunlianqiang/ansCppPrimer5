/*
 * =====================================================================================
 *
 *       Filename:  21.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月23日 16时18分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 21.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月23日 星期一 16时18分40秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<string>
#include	<list>
using namespace std;
int main ( int argc, char *argv[] )
{
	string word;
	list<string> lst;
	auto iter = lst.begin();
	while(cin >> word)
		iter = lst.insert(iter, word);

	vector<string> svec(lst.begin(), lst.end());

	for (auto &s : svec)
	{
		cout << "word: " << s << endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */

