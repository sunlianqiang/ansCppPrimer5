/*
 * =====================================================================================
 *
 *       Filename:  Sales_data.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月28日 10时38分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 7/Sales_data.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月28日 星期三 10时38分23秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

struct Sales_data {
	Sales_data() = default;
	Sales_data(const string s):bookNo(s) {
	};
	Sales_data(const string s, const unsigned u, const double r):bookNo(s), units_sold(u), revenue(r){
	};
	Sales_data(istream& in){
		in >> this->bookNo >> units_sold >> revenue;
	};
	
	string isbn() const {
		return bookNo;
	}
	Sales_data& combine(const Sales_data& );
	double avg_price() const;

	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data& );
ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);
