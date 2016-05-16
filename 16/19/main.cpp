/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月08日 10时40分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include<vector>
using namespace std;

template <typename T>
void print (T &t)
{
	for (typename T::size_type i = 0; i < t.size(); ++i)
		cout << t.at(i) << endl;
	return ;
}		/* -----  end of function print  ----- */
int main ( int argc, char *argv[] )
{
	vector<int> iv = {
		1, 3, 5
	};
	print(iv);
	return 0;
}				/* ----------  end of function main  ---------- */
