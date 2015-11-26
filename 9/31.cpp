/*
 * =====================================================================================
 *
 *       Filename:  31.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月25日 19时00分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 31.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月25日 星期三 19时00分20秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<list>
#include	<forward_list>
using namespace std;
int main ( int argc, char *argv[] )
{
	vector<int> vi = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			iter = vi.insert(iter, *iter);
			iter += 2;
		}
		else
		{
			iter = vi.erase(iter);
		}
	}

	cout << "vector: ";
	for (auto i : vi)
		cout << i << ", ";
	cout << endl;

	//list
	list<int> ilst = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	auto iter2 = ilst.begin();
	while (iter2 != ilst.end())
	{
		if (*iter2 % 2)
		{
			iter2 = ilst.insert(iter2, *iter2);
			++iter2;
			++iter2;
		}
		else
		{
			iter2 = ilst.erase(iter2);
		}
	}

	cout << "list: ";
	for (auto i : ilst)
		cout << i << ", ";
	cout << endl;

	//forward_list
	forward_list<int> flst = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end())
	{
		if (*curr % 2)
		{
			curr = flst.insert_after(curr, *curr);
			prev = curr;
			++curr;
		}
		else
		{
			curr = flst.erase_after(prev);
		}
	}

	cout << "forward_list: ";
	for (auto i : flst)
		cout << i << ", ";
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */

