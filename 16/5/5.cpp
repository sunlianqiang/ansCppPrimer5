/*
 * =====================================================================================
 *
 *       Filename:  5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月01日 16时09分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include<array>
using namespace std;

template <class T, size_t N>
void print (const T (&p)[N])
{
	for (size_t i = 0; i != N; ++i)
		cout << p[i] << endl;
	return ;
}		/* -----  end of template function print  ----- */
int main ( int argc, char *argv[] )
{
	int ia[4] = {
		1, 2, 3, 4
	};

	print(ia);
	return 0;
}				/* ----------  end of function main  ---------- */
