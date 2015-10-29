/*
 * =====================================================================================
 *
 *       Filename:  7.1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月27日 20时48分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 7/1/7.1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月27日 星期二 20时48分37秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main ( int argc, char *argv[] )
{
	Sales_data data1, data2;
	cin >> data1.bookNo >> data1.units_sold >> data1.revenue;
	cin >> data2.bookNo >> data2.units_sold >> data2.revenue;
	if (data1.bookNo == data2.bookNo)
	{
		cout << data1.bookNo << " " << data1.units_sold + data2.units_sold << " " << data1.revenue + data2.revenue << endl;
		return 0;
	}
	else
		cerr << "data must refer to same ISBN" << endl;
	return -1;
}				/* ----------  end of function main  ---------- */
