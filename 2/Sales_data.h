/*
 * =====================================================================================
 *
 *       Filename:  Sales_data.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月10日 18时48分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 2/Sales_data.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月10日 星期六 18时48分15秒
 ************************************************************************/


#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
using namespace std;

struct Sales_data 
{
	string isbn;
	unsigned int units_sold;
	double price;
};

#endif
