/*
 * =====================================================================================
 *
 *       Filename:  27.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月06日 11时33分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 27.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年01月06日 星期三 11时33分48秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include	"TextQuery.h"
using namespace std;

void runQueries (ifstream &infile)
{
	TextQuery tq(infile);

	while (true) {
		cout << "enter word to look for, or q to quit: ";
		string s;

		if (!(cin>>s) || s == "q") break;

		print(cout, tq.query(s)) << endl;
	}
	return ;
}		/* -----  end of function runQueries  ----- */


int main ( int argc, char *argv[] )
{
	ifstream input("input");
	runQueries(input);

	return 0;
}				/* ----------  end of function main  ---------- */
