/*
 * =====================================================================================
 *
 *       Filename:  4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月01日 17时19分06秒
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

template <typename I, typename U>
I find(I it1, I it2, const U elem)
{
	for (; it1 != it2; ++it1)
	{
		if (*it1 == elem)
			return it1;
	}
	return it2;
}		/* -----  end of template function findTemplate  ----- */
int main ( int argc, char *argv[] )
{
	vector<int> iv = {
		1, 2, 3, 4, 5
	};

	auto it = find(iv.cbegin(), iv.cend(), 3);
	if (it != iv.cend())
		cout << *it << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
