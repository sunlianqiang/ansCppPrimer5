/*
 * =====================================================================================
 *
 *       Filename:  basket.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月29日 18时48分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */
#ifndef _BASKET_H_
#define _BASKET_H_

#include<iostream>
#include<ostream>
#include<memory>
#include<set>
#include	"quote.h"
using namespace std;

class Basket {
	public:
		void add_item(const std::shared_ptr<Quote> &sale) {
			items.insert(sale);
		}
		void add_item(const Quote& sale) {
			items.insert(std::shared_ptr<Quote> (sale.clone()));
		}
		void add_item(Quote&& sale) {
			items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
		}
		double total_receipt(std::ostream&) const;

	

	private:
		static bool compare(const std::shared_ptr<Quote> &lhs, 
				const std::shared_ptr<Quote> &rhs) {
			return lhs->isbn() < rhs->isbn();
		}
		std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{ compare };
};

#endif
