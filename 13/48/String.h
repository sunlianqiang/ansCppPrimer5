/*
 * =====================================================================================
 *
 *       Filename:  String.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月26日 22时20分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: String.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月26日 星期五 22时20分02秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include<algorithm>
using namespace std;

/*
 * =====================================================================================
 *        Class:  String
 *  Description:  
 * =====================================================================================
 */
class String
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		String () : String("") {
		}/* constructor */

		String (const char *s) ;
		String(const String& rhs) {
			range_initializer(rhs.elements, rhs.end);
			std::cout << "copy constructor" << std::endl;
		}
		String& operator=(const String&rhs) {
			auto newstr = alloc_n_copy(rhs.elements, rhs.end);
			free();
			elements = newstr.first;
			end = newstr.second;
			std::cout << "copy-assignment " << std::endl;
			return *this;
		}
		~String() {
			free();
		}

		/* ====================  ACCESSORS     ======================================= */
		size_t size() {
			return end - elements;
		}
		size_t length() {
			return end - elements - 1;
		}

		void show() {
			for (auto c = elements; c != end; ++c) 
				cout << c ;

			cout << endl;
		}
		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		pair<char*, char*> alloc_n_copy(const char* b, const char* e) ;
		void range_initializer(const char *first, const char *last) {
			auto newstr = alloc_n_copy(first, last);
			elements = newstr.first;
			end = newstr.second;
		}
		void free() ;
		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		char * elements;
		char * end;
		allocator<char> alloc;
}; /* -----  end of class String  ----- */

