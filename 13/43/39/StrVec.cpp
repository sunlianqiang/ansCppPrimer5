/*
 * =====================================================================================
 *
 *       Filename:  StrVec.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月25日 12时26分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: StrVec.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月25日 星期四 12时26分37秒
 ************************************************************************/

#include<iostream>
#include	"StrVec.h"
using namespace std;

void StrVec::push_back (const string& s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}		/* -----  end of function StrVec::push_back  ----- */

pair<string*, string*>
StrVec::alloc_n_copy(const string *b, const string *e)
{
	auto data = alloc.allocate(e - b);
	return {
		data, uninitialized_copy(b, e, data)
	};
}

void StrVec::free (  )
{
	if (elements)
	{
		for (auto p = first_free; p != elements;)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}		/* -----  end of function StrVec::free  ----- */

StrVec::StrVec (const StrVec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}		/* -----  end of function StrVec::StrVec  ----- */

StrVec::~StrVec() {
	free();
}

StrVec& StrVec::operator=(const StrVec &rhs  )
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}		/* -----  end of function StrVec::operator=  ----- */

void StrVec::reallocate (  )
{
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}		/* -----  end of function StrVec::reallocate  ----- */

void StrVec::reserve (size_t n)
{
	if (capacity() < n)
		reallocate();
}		/* -----  end of function StrVec::reserve  ----- */

void StrVec::resize (size_t n, const string &val)
{
	if (n < size())
	{
		while (size() > n)
			alloc.destroy(--first_free);
	}
	else
	{
		while (n > size())
			push_back(val);
	}
}		/* -----  end of function StrVec::resize  ----- */

int main ( int argc, char *argv[] )
{
	return 0;
}				/* ----------  end of function main  ---------- */
