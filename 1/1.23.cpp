/*
 * =====================================================================================
 *
 *       Filename:  1.23.cpp
 *
 *    Description:  1.23
 *
 *        Version:  1.0
 *        Created:  2015年09月28日 17时55分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 1/1.23.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年09月28日 星期一 17时55分24秒
 ************************************************************************/

#include<iostream>
#include "Sales_item.h"
#include <map>
#include <string>

using namespace std;


	int
main ( int argc, char *argv[] )
{
	map<string,int> sales_count;
	Sales_item item;
	cout<< "pls input isbn, unit_sold, price:" <<endl;
	while( cin>>item )
	{
		if( sales_count.find(item.isbn()) == sales_count.end() )
			// mymap.insert ( std::pair<char,int>('a',100) );''))
			sales_count.insert( std::pair<string,int>(item.isbn(),1));
		else
			sales_count[item.isbn()]++;

		cout<<"continue input?y/n"<<endl;
		char ch;
		if(cin>>ch)
		{
			if(ch == 'y')
			{
				cout<< "pls input isbn, unit_sold, price:" <<endl;
				continue;
			}
			else
				break;
		}

	}

	//cout
	map<string,int>::iterator it;
	cout<< "isbn and sale count num:" <<endl;
	for(it=sales_count.begin(); it!=sales_count.end(); ++it)
	{
		cout<< it->first << " " << it->second <<endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */

