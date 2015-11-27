/*
 * =====================================================================================
 *
 *       Filename:  49.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月26日 17时38分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 49.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月26日 星期四 17时38分32秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<fstream>
using namespace std;
int main ( int argc, char *argv[] )
{
	//abcdefghijklmnopqrstuvwxyz
	string ascender("bdfhijklt");
	string descender("gjpqy");
	string file("input");

	ifstream is;
	is.open(file);
	string word;
	string maxword;
	while (is >> word)
	{
		if (word.find_first_of(ascender) == string::npos && word.find_first_of(descender) == string::npos && word.size() > maxword.size())	
		{
			maxword.assign(word);
		}
	}
	cout << maxword << endl;

	return 0;
}				/* ----------  end of function main  ---------- */

