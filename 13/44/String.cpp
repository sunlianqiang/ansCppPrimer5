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

/*************************************************************************
    > File Name: String.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月26日 星期五 23时34分17秒
 ************************************************************************/

#include<iostream>
#include "String.h"
using namespace std;

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
int main ( int argc, char *argv[] )
{
	return 0;
}				/* ----------  end of function main  ---------- */
