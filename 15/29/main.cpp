/***************************************************************************
 *  @file       main.cpp
 *  @author     Alan.W
 *  @date       21  Jan 2014
 *  @remark     This code is for the exercises from C++ Primer 5th Edition
 *  @note
 ***************************************************************************/
//
// Exercise 15.4:
// Which of the following declarations, if any, are incorrect? Explain why.
//       class Base { ... };
//      (a) class Derived : public Derived { ... }; //incorrect, deirve from itself
//      (b) class Derived : private Base { ... };   //incorrect, this is a definition not a declaration
//      (c) class Derived : public Base;            //incorrect, A derived class is declared like any other class. The declaration
                                                    //contains the class name but does not include its derivation list.
                                                    //@ reported by lafener, check #154 for detail.
// Exercise 15.5:
// Define your own version of the Bulk_quote class.
//
// Exercise 15.6:
// Test your print_total function from the exercises in § 15.2.1 (p. 595)
// by passing both Quote and Bulk_quote objects o that function.
//

#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "quote.h"
#include "bulk_quote.h"
#include "disc_quote.h"

double print_total (std::ostream& os, const Quote& item, size_t n);

int main()
{
	vector<shared_ptr<Quote>> basket;

    
    
	basket.push_back(make_shared<Bulk_quote>("textbook", 10.60, 10, 0.3)); 
	basket.push_back(make_shared<Bulk_quote>("textbook2", 10.60, 10, 0.3));

	double total = 0;
	//for (auto p : basket)
	//{
	//	total += p->net_price(15);
	//}
	for (auto it = basket.begin(); it != basket.end(); ++it)
	{
		total += (*it)->net_price(15);
	}
	cout << total << endl;


    return 0;
}

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);

    os << "ISBN:" << item.isbn()
       << "# sold: " << n << " total due: " << ret << std::endl;

    return ret;
}
