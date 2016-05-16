/*
 * =====================================================================================
 *
 *       Filename:  blob.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月06日 11时22分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#ifndef _BLOB_H_
#define _BLOB_H_

#include<iostream>
#include<vector>
#include<memory>
#include "shared_pointer.hpp"
using namespace std;


/*
 * =====================================================================================
 *        Class:  Blob
 *  Description:  
 * =====================================================================================
 */
template < class T >
class Blob
{
	typedef T value_type;
	typedef typename std::vector<T>::size_type size_type;

	public:
	/* ====================  LIFECYCLE     ======================================= */
	Blob ();                             /* constructor */
	Blob (std::initializer_list<T> il);                             /* constructor */

	template <typename It> 
		Blob(It b, It e) : data(std::make_shared<std::vector<T>(b, e)) {
		}

	/* ====================  ACCESSORS     ======================================= */
	size_type size() const {
		return data->size();
	}
	void push_back(const T &t) {
		data->push_back(t);
	}
	void push_back(T &&t) {
		data->push_back(std::move(t));
	}
	void pop_back();

	T& back();
	const T& back() const;
	T& operator[] (size_type i);
	const T& operator[] (size_type i) const;
	/* ====================  MUTATORS      ======================================= */

	/* ====================  OPERATORS     ======================================= */

	/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
	shared_ptr<std::vector<T>> data;
	void check(size_type i, const std::string &msg) const;

}; /* ----------  end of template class Blob  ---------- */

	template < class T >
Blob<T>::Blob (  ) : data(std::make_shared<std::vector<T>>())
{
}		/* -----  end of method Blob<T>::Blob  ----- */

	template < class T >
Blob<T>::Blob (std::initializer_list<T> il) : data(std::make_shared<std::vector<T>>(il))
{
}		/* -----  end of method Blob<T>::Blob  ----- */


template < class T >
void Blob<T>::check (size_type i, const std::string &msg) const
{
	if (i >= data->size())
		throw std::out_of_range(msg);
}		/* -----  end of method Blob<T>::check  ----- */

	template < class T >
T& Blob<T>::back (  )
{
	check(0, "back on empty Blob");
	return data->back();
}		/* -----  end of method Blob<T>::back  ----- */

template < class T >
const T& Blob<T>::back (  ) const
{
	check(0, "back on empty Blob");
	return data->back();
}		/* -----  end of method Blob<T>::back  ----- */

	template < class T >
T& Blob<T>::operator[] (size_type i)
{
	check(i, "subscript out of range");
	return (*data)[i];
}		/* -----  end of method Blob<T>::[]  ----- */

template < class T >
const T& Blob<T>::operator[] (size_type i) const
{
	check(i, "subscript out of range");
	return (*data)[i];
}		/* -----  end of method Blob<T>::[]  ----- */

	template < class T >
void Blob<T>::pop_back (  )
{
	check(0, "pop_back on empty Blob");
	return data->pop_back();
}		/* -----  end of method Blob<T>::pop_back  ----- */


#endif
