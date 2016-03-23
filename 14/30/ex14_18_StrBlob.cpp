#include "ex14_18_StrBlob.h"
#include <algorithm>

//==================================================================
//
//		StrBlob - operators
//
//==================================================================

bool operator==(const StrBlob &lhs, const StrBlob &rhs)
{
    return *lhs.data == *rhs.data;
}

bool operator!=(const StrBlob &lhs, const StrBlob &rhs)
{
    return !(lhs == rhs);
}

bool operator< (const StrBlob &lhs, const StrBlob &rhs)
{
    return std::lexicographical_compare(lhs.data->begin(), lhs.data->end(), rhs.data->begin(), rhs.data->end());
}

bool operator> (const StrBlob &lhs, const StrBlob &rhs)
{
    return rhs < lhs;
}

bool operator<=(const StrBlob &lhs, const StrBlob &rhs)
{
    return !(rhs < lhs);
}

bool operator>=(const StrBlob &lhs, const StrBlob &rhs)
{
    return !(lhs < rhs);
}

//================================================================
//
//		StrBlobPtr - operators
//
//================================================================

bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return lhs.curr == rhs.curr;
}

bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
    return !(lhs == rhs);
}

bool operator< (const StrBlobPtr &x, const StrBlobPtr &y)
{
    return x.curr < y.curr;
}

bool operator>(const StrBlobPtr &x, const StrBlobPtr &y)
{
    return x.curr > y.curr;
}

bool operator<=(const StrBlobPtr &x, const StrBlobPtr &y)
{
    return x.curr <= y.curr;
}

bool operator>=(const StrBlobPtr &x, const StrBlobPtr &y)
{
    return x.curr >= y.curr;
}

//================================================================
//
//		ConstStrBlobPtr - operators
//
//================================================================

bool operator==(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    return lhs.curr == rhs.curr;
}

bool operator!=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    return !(lhs == rhs);
}

bool operator< (const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    return lhs.curr < rhs.curr;
}

bool operator>(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    return lhs.curr > rhs.curr;
}

bool operator<=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    return lhs.curr <= rhs.curr;
}

bool operator>=(const ConstStrBlobPtr &lhs, const ConstStrBlobPtr &rhs)
{
    return lhs.curr >= rhs.curr;
}

//==================================================================
//
//		copy assignment operator and move assignment operator.
//
//==================================================================

StrBlob& StrBlob::operator=(const StrBlob &lhs)
{
    data = make_shared<vector<string>>(*lhs.data);
    return *this;
}

StrBlob& StrBlob::operator=(StrBlob &&rhs) NOEXCEPT
{
    if (this != &rhs) {
        data = std::move(rhs.data);
        rhs.data = nullptr;
    }

    return *this;
}

//==================================================================
//
//		members
//
//==================================================================

StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
    return StrBlobPtr(*this, data->size());
}

ConstStrBlobPtr StrBlob::cbegin() const
{
    return ConstStrBlobPtr(*this);
}

ConstStrBlobPtr StrBlob::cend() const
{
    return ConstStrBlobPtr(*this, data->size());
}
    
StrBlobPtr& StrBlobPtr::operator++()
{
	check(curr, "past end of ptr");
	++curr;

	return (*this);
}

StrBlobPtr& StrBlobPtr::operator++(int)
{
	StrBlobPtr ret = (*this);
	++(*this);

	return ret;
}

StrBlobPtr& StrBlobPtr::operator--()
{
	check(--curr, "past begin of ptr");

	return (*this);
}

StrBlobPtr& StrBlobPtr::operator--(int)
{
	StrBlobPtr ret = (*this);
	--(*this);

	return ret;
}

StrBlobPtr& StrBlobPtr::operator+=(const size_t add) {
	curr += add;
	check(curr, "past end");
	return (*this);
}
StrBlobPtr& StrBlobPtr::operator+(const size_t add) {
	auto ret = *this;
	ret += add;

	return ret;
}

string& StrBlobPtr::operator*() {
	auto p = check(curr, "deference past end");
	return (*p)[curr];
}


const string& StrBlobPtr::operator*() const {
	auto p = check(curr, "deference past end");
	return (*p)[curr];
}


const string* ConstStrBlobPtr::operator->() {
	return &this->operator*(); 
}

const string& ConstStrBlobPtr::operator*() {
	auto p = check(curr, "deference past end");
	return (*p)[curr];
}


string* StrBlobPtr::operator->() {
	return &this->operator*(); 
}

