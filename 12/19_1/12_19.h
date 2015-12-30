/*
 * =====================================================================================
 *
 *       Filename:  12_19.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月29日 11时28分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 12_19.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月29日 星期二 11时28分36秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<vector>
#include	<memory>
#include <initializer_list>
#include <stdexcept>
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
		StrBlobPtr begin() ;
		StrBlobPtr end() ;

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
		bool operator!=(const StrBlobPtr& p) {
			 return p.curr != curr; 
		}

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

