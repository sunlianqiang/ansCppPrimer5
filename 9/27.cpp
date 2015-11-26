/*
 * =====================================================================================
 *
 *       Filename:  27.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月25日 17时57分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 27.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月25日 星期三 17时57分57秒
 ************************************************************************/

#include<iostream>
#include	<forward_list>
using namespace std;

int main ( int argc, char *argv[] )
{
	forward_list<int> flst = {
		1, 2, 3, 4, 5, 6, 7
	};

	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end())
	{
		if (*curr%2)
		{
			curr = flst.erase_after(prev);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	cout << "flst: ";
	for (auto i : flst)
		cout << i << ", ";
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
