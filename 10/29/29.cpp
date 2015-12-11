/*
 * =====================================================================================
 *
 *       Filename:  29.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月08日 14时46分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 29.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月08日 星期二 14时46分54秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<string>
#include	<iterator>
#include	<fstream>
using namespace std;

int main ( int argc, char *argv[] )
{
//	vector<string> vs;
	fstream is("input");
	istream_iterator<string> str_it(is), str_eof;
	ostream_iterator<string> str_out(cout, "\n");

	vector<string> vs(str_it, str_eof);
	copy(vs.begin(), vs.end(), str_out);
	return 0;
}				/* ----------  end of function main  ---------- */
