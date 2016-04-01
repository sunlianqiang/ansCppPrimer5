#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#include	"disc_quote.h"

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& b, double p, std::size_t q, double disc) :
        Disc_quote(b, p, q, disc)  {   }

	virtual void debug() override {
		this->Disc_quote::debug();
	}
    double net_price(std::size_t n) const override;

private:
};

#endif // BULK_QUOTE_H
