/*
 * =====================================================================================
 *
 *       Filename:  2.35.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月09日 18时02分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 2/2.35.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月09日 星期五 18时02分16秒
 ************************************************************************/

#include <iostream>
#include <typeinfo>
using namespace std;



int main()
{
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    // print i means int, and PKi means pointer to const int.
    std::cout   << "i is "      << typeid(i).name()
		<< "j is "      << typeid(j).name()
                << "\nk is "    << typeid(k).name()
                << "\np is "    << typeid(p).name()
                << "\nj2 is "   << typeid(j2).name()
                << "\nk2 is "   << typeid(k2).name()
                << "\nint is "   << typeid(int).name()
                << "\ndouble is "   << typeid(double).name()
                << std::endl;

    return 0;
}
