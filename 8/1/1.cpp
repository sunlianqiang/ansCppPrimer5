/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月18日 16时29分07秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月18日 星期三 16时29分07秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<vector>
#include	<fstream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
	vector<string> svec;
	string filename = "input";
	ifstream input(filename);
	if (input)
	{
		string str;
		while ( getline(input, str) )
			svec.push_back(str);
	}
	else
		cerr << "could't open " << string(filename);

	for (auto str : svec)
	{
		cout << "line: " << str <<endl;
	}
		
	return 0;
}				/* ----------  end of function main  ---------- */
