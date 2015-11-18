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
#include	<sstream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  getData
 *  Description:  
 * =====================================================================================
 */
void getData (istream & in, vector<string> & vec  )
{
	string str;
	while (getline(in, str))
		vec.push_back(str);

	return ;
}		/* -----  end of function getData  ----- */
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
		getData(input, svec);
	}
	else
		cerr << "could't open " << string(filename);

	for (auto strline : svec)
	{
		istringstream iss(strline);
		cout << "line: ";
		string strword;
		while (iss)
		{
			iss >> strword;
			cout << strword << ", ";
		}
		cout << endl;
	}

	return 0;
}				/* ----------  end of function main  ---------- */
