/*
 * =====================================================================================
 *
 *       Filename:  6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月01日 17时52分06秒
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

template <class T, unsigned N>
const T* begin (const T (&p)[N])
{
	return &p[0];
}		/* -----  end of template function begin  ----- */

template <class T, unsigned N>
const T* end (const T (&p)[N])
{
	return &p[0] + N;
}		/* -----  end of template function end  ----- */

template <class T, size_t N>
constexpr size_t arr_size(const T (&arr)[N] )
{
	return N;
}		/* -----  end of template function constexpr  ----- */

int main ( int argc, char *argv[] )
{
	int a[5] = {
		1, 3, 5, 6
	};
	cout << arr_size(a) << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
