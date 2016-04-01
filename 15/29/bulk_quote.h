#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include	"disc_quote.h"

class Bulk_quote : public Disc_quote
{
public:
    //Bulk_quote() = default;
	using Disc_quote::Disc_quote;
    Bulk_quote(const std::string& b, double p, std::size_t q, double disc) :
        Disc_quote(b, p, q, disc)  {   }
	Bulk_quote(const Bulk_quote& bq) : Disc_quote(bq) {
		std::cout << "bulk_Quote: copy constructing\n"; 
	}
	Bulk_quote(Bulk_quote&& bq) : Disc_quote(std::move(bq)) {
		std::cout << "bulk_Quote: move constructing\n"; 
	}

	virtual void debug() override {
		this->Disc_quote::debug();
	}
    double net_price(std::size_t n) const override;

private:
};

#endif // BULK_QUOTE_H
