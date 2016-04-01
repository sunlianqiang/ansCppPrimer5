#ifndef QUOTE_H
#define QUOTE_H

#include <string>
#include <iostream>
using namespace std;

class Quote
{
	public:
		Quote() = default;
		Quote(const std::string &b, double p) :
			bookNo(b), price(p) { }
		// copy constructor
		Quote(const Quote& q) : bookNo(q.bookNo), price(q.price)
		{
		std::cout << "Quote: copy constructing\n"; 
		}

		// move constructor
		Quote(Quote&& q) noexcept : bookNo(std::move(q.bookNo)), price(std::move(q.price))
		{
			std::cout << "Quote: move constructing\n"; 
		}

		virtual Quote* clone() const & {
			return new Quote(*this);
		}
		virtual Quote* clone() && {
			return new Quote(std::move(*this));
		}

std::string     isbn() const { return bookNo; }
//virtual double  net_price(std::size_t n) const = 0;
virtual double  net_price(std::size_t n) const { return n * price; }
virtual void debug() {
	cout << "Quote, bookNo: " << bookNo << ", price: " << price << endl;
}

virtual ~Quote() = default;

private:
std::string bookNo;

protected:
double  price = 0.0;

};

#endif // QUOTE_H
