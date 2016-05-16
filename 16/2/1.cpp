/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月01日 15时58分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
using namespace std;

template <class T>
T compare (const T &v1, const T &v2)
{
	if (v1 < v2) return -1;
	if (v2 < v1) return 1;
	return 0;
}		/* -----  end of template function compare  ----- */
int main ( int argc, char *argv[] )
{
	cout << compare(1, 2) << endl;
	cout << compare(2, 1) << endl;
	cout << compare(1, 1) << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
