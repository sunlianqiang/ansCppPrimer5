/***************************************************************************
 *  @file       main.cpp
 *  @author     Alan.W
 *  @date       21  Jan 2014
 *  @remark     This code is for the exercises from C++ Primer 5th Edition
 *  @note
 ***************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>

#include "quote.h"
#include "bulk_quote.h"
#include "disc_quote.h"
#include "basket.h"

double print_total (std::ostream& os, const Quote& item, size_t n);

int main()
{
//	vector<shared_ptr<Quote>> basket;
	Basket b;
	Bulk_quote bq1("textbook", 10.60, 10, 0.3);
	Bulk_quote bq2("textbook2", 10.60, 10, 0.3);    
	b.add_item(bq1);
	b.add_item(bq2);

	//b.add_item(make_shared<Bulk_quote>("textbook", 10.60, 10, 0.3)); 
	//b.add_item(make_shared<Bulk_quote>("textbook2", 10.60, 10, 0.3));

	std::ofstream log("log.txt", std::ios_base::app|std::ios_base::out);
	b.total_receipt(log);
    
	////basket.push_back(make_shared<Bulk_quote>("textbook", 10.60, 10, 0.3)); 
	////basket.push_back(make_shared<Bulk_quote>("textbook2", 10.60, 10, 0.3));

	//double total = 0;
	////for (auto p : basket)
	////{
	////	total += p->net_price(15);
	////}
	//for (auto it = basket.begin(); it != basket.end(); ++it)
	//{
	//	total += (*it)->net_price(15);
	//}
	//cout << total << endl;


    return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN:" << item.isbn()
       << "# sold: " << n << " total due: " << ret << std::endl;

    return ret;
}
