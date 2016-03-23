/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月21日 16时25分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */


#include<iostream>
#include "PrintString.h"
#include	<string>
#include	<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<string> svec;
	PrintString p1;
	string s1 = p1();
	svec.push_back(s1);

	PrintString p2(cin);
	string s2 = p2();
	svec.push_back(s2);

	PrintString p3;
	string s3 = p3();
	svec.push_back(s3);

	for (auto s : svec)
		cout << s << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
