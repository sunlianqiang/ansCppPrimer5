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
	Sales_data total;

	if ( cin>>total.isbn >> total.units_sold >> total.price )
	{
		Sales_data item;
		while( cin>>item.isbn >> item.units_sold >> item.price )
		{
			if ( total.isbn == item.isbn )
			{
				total.units_sold += item.units_sold;
			}
			else
			{
				cout << "book " << total.isbn << ", sold " << total.units_sold << ", total revenue is: " << total.units_sold*total.price << ", avgerage price is: " 
					 << total.price <<endl;
				total.units_sold = item.units_sold;
				total.isbn = item.isbn;
				total.price = item.price;
			}
		}
	}
	else
	{
		cout << "book " << total.isbn << ", sold " << total.units_sold << ", total revenue is: " << total.units_sold*total.price << ", avgerage price is: " 
					 << total.price <<endl;
	}

	return 0;
}				/* ----------  end of function main  ---------- */
