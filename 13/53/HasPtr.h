/*
 * =====================================================================================
 *
 *       Filename:  HasPtr.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月24日 14时29分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
using namespace std;

#ifndef CP5_ex13_11_h
#define CP5_ex13_11_h

#include <string>
#include <iostream>

class HasPtr {

	public:
		friend void swap(HasPtr&, HasPtr&);
		HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {
			//cout << "content: " << *ps << ", " << i << ", ";
			cout << "HasPtr(const std::string &s = std::string()" << endl;
		}
		HasPtr(const std::string &s, int i1) : ps(new std::string(s)), i(i1) {
			//cout << "content: " << *ps << ", " << i << ", ";
			cout << "HasPtr(const std::string &s, int i1" << endl;
		}
		HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {
			//cout << "content: " << *ps << ", " << i << ", ";
			cout << "HasPtr(const HasPtr &hp)" << endl;
		}
		/*
		HasPtr& operator=(const HasPtr &hp) {

			auto new_p = new std::string(*hp.ps);
			delete ps;
			ps = new_p;
			i = hp.i;
			return *this;
		}
		*/

		HasPtr(HasPtr &&p) noexcept : ps(p.ps), i(p.i) {
			//cout << "content: " << *ps << ", " << i << ", ";
			cout << "HasPtr(HasPtr &&p" << endl;
			p.ps = 0;
		}
		HasPtr& operator=(HasPtr rhs) {
			swap(*this, rhs); 
			rhs.ps = nullptr;
			//cout << "content: " << *ps << ", " << i << ", ";
			cout << "operator=(HasPtr rhs)" << endl;
			return *this;
		}
		inline void swap(HasPtr &lhs, HasPtr &rhs) {
			using std::swap;
			swap(lhs.ps, rhs.ps);
			swap(lhs.i, rhs.i);
			cout << "call swap" << endl;
		}
		~HasPtr() {
			if (ps)
				delete ps;
		} 
bool operator<(const HasPtr &rhs) const {
	std::cout << "call <" << endl;
	return i < rhs.i;
}

		void show() {
			std::cout << *ps << ", value: " << i << std::endl; }
	private:
		std::string *ps;
		int i;
};

inline void swap(HasPtr& lhs, HasPtr& rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
	std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;
}

#endif
