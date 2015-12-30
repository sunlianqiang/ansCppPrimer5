/*
 * =====================================================================================
 *
 *       Filename:  StrBlob.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月16日 16时56分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: StrBlob.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月16日 星期三 16时56分26秒
 ************************************************************************/

#include	"StrBlob.h"
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
