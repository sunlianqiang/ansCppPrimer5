/*
 * =====================================================================================
 *
 *       Filename:  26.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月05日 21时35分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 26.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年01月05日 星期二 21时35分59秒
 ************************************************************************/

#include<iostream>
#include	<memory>
#include	<string>
using namespace std;

#define n 5
int main ( int argc, char *argv[] )
{
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	auto q = p;

	string s;
	while (cin >> s && q != p + n)
		alloc.construct(q++, s);

	const size_t size = q - p;
	for (size_t i = 0; i < size; ++i)
		cout << *(q + i) << endl;

	while (q != p)
		alloc.destroy(--q);
	alloc.deallocate(p, n);

	return 0;
}				/* ----------  end of function main  ---------- */
