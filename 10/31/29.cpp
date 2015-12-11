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
#include	<algorithm>
using namespace std;

int main ( int argc, char *argv[] )
{
//	vector<string> vs;
	fstream is("input");
	istream_iterator<int> in_it(is), in_eof;
	ostream_iterator<int> in_out(cout, ", ");

	vector<int> vs(in_it, in_eof);
	copy(vs.begin(), vs.end(), in_out);
	cout << endl;

	sort(vs.begin(), vs.end());
	unique_copy(vs.begin(), vs.end(), in_out);
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
