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
	cout << "1" << endl;
	//Sales_data();
	cout << "2" << endl;
	Sales_data("2");
	cout << "3" << endl;
	Sales_data("3", 3, 3);
	cout << "4" << endl;
	Sales_data(cin);
	cout << "end" << endl;
	/*
	Sales_data total = Sales_data();
	
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
	*/
	return 0;
}				/* ----------  end of function main  ---------- */

