/*
 * =====================================================================================
 *
 *       Filename:  1.23.cpp
 *
 *    Description:  1.23
 *
 *        Version:  1.0
 *        Created:  2015年09月28日 17时55分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 1/1.23.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年09月28日 星期一 17时55分24秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
#include <map>
#include <string>
#include	<vector>
#include	<fstream>
#include	<iterator>
#include	<algorithm>

using namespace std;

void print (vector<Sales_item> &vs, string log)
{
	cout << log << endl;

    cout << "s.bookNo, s.units_sold, total_price, price" << endl;
	for (auto &s : vs)
		cout << s << endl;
	return ;
}		/* -----  end of function print  ----- */

bool compare(const Sales_item &s1, const Sales_item &s2)
{
	return s1.isbn() < s2.isbn();
}		/* -----  end of function compareIsbn  ----- */

unsigned add (const Sales_item &s1, const Sales_item &s2  )
{
	return s1.total_price() + s2.total_price();
}		/* -----  end of function add  ----- */
int main ( int argc, char *argv[] )
{
	fstream is("input");
	istream_iterator<Sales_item> item_iter(is), eof;
	ostream_iterator<Sales_item> out_iter(cout, "\n");
	Sales_item sum = *item_iter++;

	vector<Sales_item> vs(item_iter, eof);
	print(vs, "after input:");

	sort(vs.begin(), vs.end(), compare);
	print(vs, "after sort:");

	cout << "after accumulate:" << endl;
	auto l = vs.begin();
	while (l != vs.end())
	{
		auto item = *l;
		auto r = find_if(l+1, vs.end(), 
				[item](const Sales_item &item1) {
					return item.isbn() != item1.isbn();
				});

		cout << accumulate(l + 1, r, item) << endl;

		l = r;
	}

}				/* ----------  end of function main  ---------- */

