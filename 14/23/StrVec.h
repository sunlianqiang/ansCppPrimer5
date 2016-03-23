/*
 * =====================================================================================
 *
 *       Filename:  StrVec.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月25日 12时15分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include<string>
#include<memory>
#include<utility>
#include <initializer_list>
#include <algorithm>
using namespace std;

/*
 * =====================================================================================
 *        Class:  StrVec
 *  Description:  
 * =====================================================================================
 */
class StrVec
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		StrVec () :
			elements(nullptr), first_free(nullptr), cap(nullptr) {
			}/* constructor */
		StrVec (const StrVec& s);                             /* constructor */
		StrVec (initializer_list<string>);                             /* constructor */
		StrVec& operator= (initializer_list<string> il);                             /* constructor */
		StrVec& operator=(const StrVec&);
		~StrVec();
		/* ====================  ACCESSORS     ======================================= */
		size_t size() const {
			return  first_free - elements;
		}
		size_t capacity() const {
			return cap - elements;
		}
		string *begin() const {
			return elements;
		}
		string *end() const {
			return first_free;
		}

		/* ====================  MUTATORS      ======================================= */
		void push_back(const string&);
		void reserve(size_t n);
		void resize (size_t n, const string &val = string());

		/* ====================  OPERATORS     ======================================= */
	protected:
	private:
		/* ====================  DATA MEMBERS  ======================================= */
		std::allocator<string> alloc;
		void chk_n_alloc() {
			if (size() == capacity())
				reallocate();
		}
		
		pair<string*, string*> alloc_n_copy(const string*, const string*);
		void free();
		void reallocate();
		string *elements;
		string *first_free;
		string *cap;
}; /* -----  end of class StrVec  ----- */

