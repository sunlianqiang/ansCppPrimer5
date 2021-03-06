/*
 * =====================================================================================
 *
 *       Filename:  7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月28日 11时01分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 7/7.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月28日 星期三 11时01分40秒
 ************************************************************************/

#include<iostream>
#include	"Sales_data.h"
#include	<string>
using namespace std;
int main ( int argc, char *argv[] )
{
	//Sales_data total;
	Sales_data total = Sales_data();
	Sales_data out = Sales_data("outnum", 8, 8.5);
	print(cout, out) << endl;;
	
	if(read(cin,total))
	{
		Sales_data trans = Sales_data("");
		while (read(cin,trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data?!" << endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */

