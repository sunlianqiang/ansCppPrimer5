/*
 * =====================================================================================
 *
 *       Filename:  43.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月22日 15时49分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> ivec = {
		80, 90, 200, 4
	};

	modulus<int> intMod;
	//	auto it = find_if_not(ivec.begin(), ivec.end(), bind(intMod, 2, std::placeholders::_1));
	bool flag = false;
	for_each(ivec.begin(), ivec.end(), [&](int a) {
			if (intMod(a,2) != 0)
			{
				cout << "the elem " << a << " can't be mod by 2" << endl;
				flag = true;
			}
		});
	if (!flag)
		cout << "all int of ivec can be mod by 2" << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
