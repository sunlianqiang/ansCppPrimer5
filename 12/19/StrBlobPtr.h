/*
 * =====================================================================================
 *
 *       Filename:  StrBlobPtr.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月29日 10时40分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: StrBlobPtr.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月29日 星期二 10时40分13秒
 ************************************************************************/

#ifndef  strblobptr_INC
#define  strblobptr_INC

#include<iostream>
#include	<string>
#include	<memory>
#include	<vector>
#include	"StrBlob.h"	
using namespace std;

/*
 * =====================================================================================
 *        Class:  StrBlobPtr
 *  Description:  
 * =====================================================================================
 */
class StrBlobPtr
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		StrBlobPtr (): curr(0) { }                            /* constructor */
		StrBlobPtr (StrBlob &a, size_t sz = 0):
			wptr(a.data), curr(sz) { }                            /* constructor */

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		std::string& deref() const; 
		StrBlobPtr& incr();

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		std::shared_ptr<std::vector<std::string>>
			check(std::size_t, const std::string&) const;
		std::weak_ptr<std::vector<std::string>> wptr;
		std::size_t curr;

}; /* -----  end of class StrBlobPtr  ----- */

#endif   /* ----- #ifndef strblobptr_INC  ----- */
