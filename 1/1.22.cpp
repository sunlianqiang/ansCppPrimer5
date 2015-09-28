/*
 * =====================================================================================
 *
 *       Filename:  1.21.cpp
 *
 *    Description:  1.21 ans
 *
 *        Version:  1.0
 *        Created:  2015年09月28日 17时20分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 1/1.21.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年09月28日 星期一 17时20分21秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;


	int
main ( int argc, char *argv[] )
{

	Sales_item item1, item_all;
	cout<< "pls input item with ISBN, unit_sold, price:" << endl;
	cin >> item_all;
	cout<< "pls input item with ISBN, unit_sold, price:" << endl;
	while( cin >> item1 )
	{
		if ( item1.isbn() == item_all.isbn() )
		{
			item_all = item_all + item1;
			cout << "The sum of items is:" << item_all << endl;
		}
		else
		{
			cerr << "ISBN of items are not same!" <<endl;
			return -1;
		}
		
		cout<< "pls input item with ISBN, unit_sold, price:" << endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */
