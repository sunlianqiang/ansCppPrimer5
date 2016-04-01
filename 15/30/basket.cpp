/*
 * =====================================================================================
 *
 *       Filename:  basket.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月29日 18时52分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include	"basket.h"
using namespace std;

//		double total_receipt(std::ostream&) const;
double Basket::total_receipt(std::ostream &os) const {
	double sum = 0.0;

	for (auto iter = items.cbegin(); iter != items.cend(); 
			iter = items.upper_bound(*iter)) {
		sum += print_total(os, **iter, items.count(*iter));
	}

	os << "Total Sale: " << sum << endl;
	
	return sum;
}
