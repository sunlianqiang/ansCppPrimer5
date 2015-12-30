/*
 * =====================================================================================
 *
 *       Filename:  2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月16日 16时35分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月16日 星期三 16时35分54秒
 ************************************************************************/

#ifndef  STRBLOB_INC
#define  STRBLOB_INC

#include<iostream>
#include	<string>
#include	<vector>
#include	<memory>
#include	"StrBlobPtr.h"
using namespace std;

class StrBlobPtr;
/*
 * =====================================================================================
 *        Class:  StrBlob
 *  Description:  
 * =====================================================================================
 */
class StrBlob
{
	public:
		friend class StrBlobPtr;
		/* ====================  LIFECYCLE     ======================================= */
		typedef std::vector<std::string>::size_type size_type;
		StrBlob ();                             /* constructor */
		StrBlob (std::initializer_list<std::string> il);                             /* constructor */

		/* ====================  ACCESSORS     ======================================= */
		std::string & front();
		std::string& back();
		const std::string & front()	const;
		const std::string& back()		const;
		StrBlobPtr begin() {
			return StrBlobPtr(*this);
		}
		StrBlobPtr end() {
			auto ret = StrBlobPtr(*this, data->size());
			return ret;
		}

		/* ====================  MUTATORS      ======================================= */
		size_type size() const {
			return data->size();
		}

		bool empty() const {
			return data->empty();
		}

		void push_back(const std::string &t) {
			data->push_back(t);
		}
		void pop_back();

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		std::shared_ptr<std::vector<std::string>> data;
		void check(size_type i, const std::string &msg) const;

}; /* -----  end of class StrBlob  ----- */

#endif   /* ----- #ifndef strblob_INC  ----- */
