/*
 * =====================================================================================
 *
 *       Filename:  disc_quote.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月25日 17时01分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#ifndef DISC_QUOTE_H
#define DISC_QUOTE_H
#include "quote.h"

using namespace std;

class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const std::string& b, double p, std::size_t q, double disc) :
        Quote(b, p), min_qty(q), discount(disc)  {   }
	Disc_quote(const Disc_quote& dq) : Quote(dq), min_qty(dq.min_qty), discount(dq.discount) {
		std::cout << "Disc_quote: copy constructing\n"; 
	}
	Disc_quote(Disc_quote&& dq) : Quote(std::move(dq)), min_qty(std::move(dq.min_qty)), discount(std::move(dq.discount)) {
		std::cout << "Disc_quote: move constructing\n"; 
	}


	virtual void debug() override {
		this->Quote::debug();
		cout << "Disc_quote, min_qty: " << min_qty << ", discount: " << discount << endl;
	}
    double net_price(std::size_t n) const override = 0;
    //virtual double  net_price(std::size_t n) const { return n * price; }

protected:
    std::size_t min_qty     = 0;
    double      discount    = 0.0;
};

#endif // DISC_QUOTE_H

