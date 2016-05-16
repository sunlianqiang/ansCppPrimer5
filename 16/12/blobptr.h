/*
 * =====================================================================================
 *
 *       Filename:  blobptr.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月06日 11时31分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */
#ifndef _BLOBPTR_H_
#define _BLOBPTR_H_

#include<iostream>
#include<vector>
#include<memory>
#include "blob.h"
using namespace std;

template < class T > class BlobPtr;
template < class T >
bool operator==(const Blob<T>&, const Blob<T>&);
bool operator<(const Blob<T>&, const Blob<T>&);

/*
 * =====================================================================================
 *        Class:  BlobPtr
 *  Description:  
 * =====================================================================================
 */
template < class T >
class BlobPtr
{
	friend bool operator==<T>(const Blob<T>&, const Blob<T>&);
	public:
		/* ====================  LIFECYCLE     ======================================= */
		BlobPtr () : curr(0) {
		}/* constructor */
		BlobPtr (Blob<T> &a, size_t sz = 0) : wptr(a.data), curr(sz) {
		}/* constructor */

		T& operator*() const {
			auto p = check(curr, "dereference past end");
			return (*p)[curr];
		}
		BlobPtr& operator++();
		BlobPtr& operator--();
		BlobPtr operator++(int);
		BlobPtr operator--(int);
		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		std::shared_ptr<std::vector<T>>
			check(std::size_t, const std::string&)  const;
		std::weak_ptr<std::vector<T>> wptr;
		std::size_t curr;

}; /* ----------  end of template class BlobPtr  ---------- */

template < class T >
std::shared_ptr<std::vector<T>>
BlobPtr<T>::check (std::size_t i, const std::string& msg) const
{
	if (i >= wptr->size())
		throw std::out_of_range(msg);
	return wptr;
}		/* -----  end of method BlobPtr<T>::check  ----- */

template < class T >
BlobPtr<T>& BlobPtr<T>::operator++()
{
	check(curr++, "past out of range");
	return *this;
}		/* -----  end of method BlobPtr<T>::++  ----- */

template < class T >
BlobPtr<T>& BlobPtr<T>::operator--()
{
	check(--curr, "-- out of range");
	return *this;
}		/* -----  end of method BlobPtr<T>::++  ----- */

template < class T >
BlobPtr<T> BlobPtr<T>::operator++(int)
{
	BlobPtr ret = *this;
	++*this;
	return ret;
}		/* -----  end of method BlobPtr<T>::++  ----- */

template < class T >
BlobPtr<T> BlobPtr<T>::operator--(int)
{
	BlobPtr ret = *this;
	--*this;
	return ret;
}		/* -----  end of method BlobPtr<T>::++  ----- */

template<typename T> 
bool operator==(const BlobPtr<T> &lhs, const BlobPtr<T> &rhs) {

	    if (lhs.wptr.lock() != rhs.wptr.lock()) {
					throw runtime_error("ptrs to different Blobs!");
		}
	return lhs.curr == rhs.curr;
}
template<typename T> 
bool operator<(const BlobPtr<T> &lhs, const BlobPtr<T> &rhs) {

	    if (lhs.wptr.lock() != rhs.wptr.lock()) {
					throw runtime_error("ptrs to different Blobs!");
		}
	return lhs.curr < rhs.curr;
}
#endif
