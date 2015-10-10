/*
 * =====================================================================================
 *
 *       Filename:  2.41.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月10日 18时02分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 2/2.41.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月10日 星期六 18时02分36秒
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

struct Sales_data 
{
	string isbn;
	unsigned int units_sold;
	double price;
};
	int
main ( int argc, char *argv[] )
{
	Sales_data item1, item2;
	cin>>item1.isbn >> item1.units_sold >> item1.price;
	cin>>item2.isbn >> item2.units_sold >> item2.price;

	if( item1.isbn == item2.isbn )
	{
		unsigned totalsold = item1.units_sold + item2.units_sold;
		cout<< "Total revenue is: " << totalsold * item1.price;
	}
	else
		cerr << "isbn is not the same!";
	return 0;
}				/* ----------  end of function main  ---------- */
