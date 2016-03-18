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

//
////  ex13_30.h
////  Exercise 13.30 
////
////  Created by pezy on 1/23/15.
////
////  Write and test a swap function for your valuelike version of HasPtr. 
////  Give your swap a print statement that notes when it is executed. 
////
////  See ex13_22.h 

#ifndef CP5_ex13_11_h
#define CP5_ex13_11_h

#include <string>
#include <iostream>

class HasPtr {

	public:
		friend void swap(HasPtr&, HasPtr&);
		HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {
		}
		HasPtr(const std::string &s, int i1) : ps(new std::string(s)), i(i1) {
		}
		HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) {
		}
		HasPtr& operator=(const HasPtr &hp) {

			auto new_p = new std::string(*hp.ps);
			delete ps;
			ps = new_p;
			i = hp.i;
			return *this;
		}
		~HasPtr() {

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