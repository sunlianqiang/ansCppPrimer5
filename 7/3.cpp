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
	Sales_data & combine(Sales_data &rsh) ;
	string isbn(){
		return bookNo;
	};
	double avg_price() const;
	string bookNo;
	unsigned int units_sold;
	double revenue;
};
	
Sales_data & Sales_data::combine (Sales_data &rsh) 
{
	units_sold += rsh.units_sold;
	revenue += rsh.revenue;

	return *this;
}		/* -----  end of function combine  ----- */
double Sales_data::avg_price (  ) const
{
	if (units_sold)
		return revenue/units_sold;
	else
		return 0;
}		/* -----  end of function avg_price  ----- */
	int
main ( int argc, char *argv[] )
{
	Sales_data total;

	if ( cin>>total.bookNo >> total.units_sold >> total.revenue )
	{
		Sales_data item;
		while( cin>>item.bookNo >> item.units_sold >> item.revenue )
		{
			if ( total.bookNo == item.bookNo )
			{
				total.combine(item);
			}
			else
			{
				cout << "book " << total.bookNo << ", sold " << total.units_sold << ", total revenue is: " << total.revenue << ", avgerage price is: " 
					 << total.avg_price()  <<endl;
				total.units_sold = item.units_sold;
				total.bookNo = item.isbn();
				total.revenue = item.revenue;
			}
		}
	}
	else
	{
				cout << "book " << total.bookNo << ", sold " << total.units_sold << ", total revenue is: " << total.revenue << ", avgerage price is: " 
					 << total.avg_price()  <<endl;
	}

	return 0;
}				/* ----------  end of function main  ---------- */
