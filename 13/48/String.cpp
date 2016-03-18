/*
 * =====================================================================================
 *
 *       Filename:  String.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月26日 23时34分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include<cstring>
#include "String.h"
using namespace std;

String::String (const char *s) {
	char *s1 = const_cast<char*> (s);
	unsigned len = strlen(s);
	s1 = s1 + len;
	//while (s1)
	//	++s1;
	range_initializer(s, ++s1);
	std::cout << "constructor of char*" << std::endl;
}/* constructor */

	std::pair<char*, char*>
String::alloc_n_copy(const char *b, const char *e)
{

	auto str = alloc.allocate(e - b);
	return{
		str, std::uninitialized_copy(b, e, str) };
}
void String::free() {
	if (elements) {
		auto lambda_destroy = [&] (char &c) {
			alloc.destroy(&c);
		};
		for_each(elements, end, lambda_destroy);
		alloc.deallocate(elements, end - elements);
	}
}
//pair<char*, char*> String::alloc_n_copy(const char* b, const char* e) {
//	auto str = alloc.allocate(e -b);
//	return { str, std::uninitialized_copy(b, e, str)};
//}
