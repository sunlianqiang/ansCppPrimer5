/*
 * =====================================================================================
 *
 *       Filename:  StrBlobPtr.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月29日 10时47分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: StrBlobPtr.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月29日 星期二 10时47分05秒
 ************************************************************************/

#include<iostream>
#include	"StrBlobPtr.h"
using namespace std;

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


StrBlobPtr& StrBlobPtr::incr (  )
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}		/* -----  end of function incr  ----- */
