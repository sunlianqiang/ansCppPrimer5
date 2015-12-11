/*
 * =====================================================================================
 *
 *       Filename:  33.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月08日 16时50分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 33.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月08日 星期二 16时50分16秒
 ************************************************************************/

#include<iostream>
#include	<iterator>
#include	<vector>
#include	<fstream>
using namespace std;

int main ( int argc, char *argv[] )
{
	if (4 != argc)
	{
		cerr << "wrong paras!" << endl;
		return -1;
	}

	ifstream is(argv[1]);
	ofstream os1(argv[2]), os2(argv[3]);

	istream_iterator<int> in_iter(is), eof;
	vector<int> iv1(in_iter, eof);

	ostream_iterator<int> out_it1(os1, "\n"), out_it2(os2, "\n");

	for (auto i : iv1)
		if (i % 2 == 0)
			out_it1 = i;
		else 
			out_it2 = i;

	return 0;
}				/* ----------  end of function main  ---------- */
