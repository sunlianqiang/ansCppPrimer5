/*
 * =====================================================================================
 *
 *       Filename:  12_19.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月29日 11时31分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
  > File Name: 12_19.cpp
  > Author: ma6174
  > Mail: ma6174@163.com 
  > Created Time: 2015年12月29日 星期二 11时31分20秒
 ************************************************************************/

#include<iostream>
#include	"12_19.h"
using namespace std;

void StrBlob::check (size_type i, const string &msg) const
{
	if (i >= data->size())
		throw out_of_range(msg);
	return ;
}		/* -----  end of function check  ----- */
string& StrBlob::front (  )
{
	check(0, "front on empty StrBlob");
	return data->front();
}		/* -----  end of function front  ----- */
string& StrBlob::back (  )
{
	check(0, "back on empty StrBlob");
	return data->back();
}		/* -----  end of function back  ----- */
void StrBlob::pop_back (  )
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}		/* -----  end of function pop_back  ----- */
StrBlobPtr StrBlob::begin() {
	return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end() {
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check (std::size_t i, const std::string &msg) const
{
	auto ret = wptr.lock();
	if (!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw std::out_of_range(msg);
	return ret;
}		/* -----  end of function check  ----- */

std::string& StrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

/* 
 *StrBlobPtr
 */
StrBlobPtr& StrBlobPtr::incr (  )
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}		/* -----  end of function incr  ----- */
