/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月06日 16时03分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include "vec.h"
using namespace std;

int main ( int argc, char *argv[] )
{
	Vec<int> v = {
		1, 2, 3, 4, 5 };

	Vec<int> v2;

	v2 = v;
	std::cout << v2.capacity() << "\n";
	v2.push_back(99);
	v2.resize(2, 2);

	for (auto t : v2)
		std::cout << t << " ";


	std::cout << v2.capacity() << "\n";

	return 0;
}				/* ----------  end of function main  ---------- */
