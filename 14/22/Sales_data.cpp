/*
 * =====================================================================================
 *
 *       Filename:  Sales_data.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月28日 10时46分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 7/Sales_data.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月28日 星期三 10时46分39秒
 ************************************************************************/

#include<iostream>
#include	"Sales_data.h"
#include	<string>
using namespace std;

Sales_data& Sales_data::combine(const Sales_data& rsh)
{
	units_sold += rsh.units_sold;
	revenue += rsh.revenue;

	return *this;
}

double Sales_data::avg_price () const
{
	if (0 == units_sold)
		return 0;
	return revenue/units_sold;
}


Sales_data add (const Sales_data& lsh, const Sales_data& rsh)
{
	Sales_data total = lsh;
	total.bookNo = lsh.isbn();
	total.units_sold = lsh.units_sold + rsh.units_sold;
	total.revenue = lsh.revenue + rsh.revenue;

	return total;
}

ostream &print(ostream& os, const Sales_data& lsh)
{
	os << "isbn: " << lsh.isbn() << ", units: " << lsh.units_sold << ", revenue: " << lsh.revenue;
	return os;
}

istream &read(istream& is, Sales_data& lsh)
{
	cout << "input bookNo, units, revenue" << endl;
	is >> lsh.bookNo >> lsh.units_sold >> lsh.revenue;
	return is;
}
	ostream &operator<<(ostream &os, const Sales_data &item) {
		 os << item.bookNo << ", " << item.units_sold << ", " << item.revenue << ", " << item.avg_price();
		return os;
	}
	istream &operator>>(istream &is, Sales_data &item) {
		double price;
		is >> item.bookNo >> item.units_sold >> price;
		if (is)
			item.revenue = item.units_sold * price;
		else
			item = Sales_data();
		return is;
	}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) 
{
	if (lhs.isbn() != rhs.isbn())
	{
		cout << "error";
	}

	Sales_data tmp = lhs; 
	tmp.units_sold += rhs.units_sold;
	tmp.revenue += rhs.revenue;

	return tmp;
}

Sales_data & Sales_data::operator+=(const Sales_data &rhs) 
{
	*this = (*this) + rhs;
	return *this;
}

Sales_data operator-(const Sales_data lhs, const Sales_data rhs) 
{
	Sales_data tmp = lhs; 
	tmp -= rhs;

	return tmp;
}

Sales_data & Sales_data::operator-=(const Sales_data &rhs) 
{
	if (this->isbn() != rhs.isbn())
	{
		cout << "error";
	}

	this->units_sold -= rhs.units_sold;
	this->revenue -= rhs.revenue;

	return *this;
}
