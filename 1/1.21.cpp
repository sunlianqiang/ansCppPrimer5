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

	Sales_item item1, item2;
	cout<< "pls input item1 with ISBN, unit_sold, price:" << endl;
	cin >> item1;
	cout<< "pls input item2 with ISBN, unit_sold, price:" << endl;
	cin >> item2;
	if ( item1.isbn() == item2.isbn() )
	{
		cout << "The sum of item1 and item2 is:" << item1 + item2 << endl;
	}
	else
	{
		cerr << "ISBN of item1 and item2 are not same!" <<endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */
