/*
 * =====================================================================================
 *
 *       Filename:  1.20.cpp
 *
 *    Description:  1.20 ans
 *
 *        Version:  1.0
 *        Created:  2015年09月28日 16时52分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 1/1.20.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年09月28日 星期一 16时52分50秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
using namespace std;


	int
main ( int argc, char *argv[] )
{
	Sales_item item;
	cout<<"pls input bookNo, bookNum, price:" <<endl;
	while( cin>> item )
	{
		cout<<"bookNo, units_sold, revenue, avg_price" <<endl;
		cout<<item;
		cout<<"pls input bookNo, bookNum, price:" <<endl;
	}

	
	return 0;
}				/* ----------  end of function main  ---------- */
