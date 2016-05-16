/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月06日 15时27分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
  > File Name: main.cpp
  > Author: ma6174
  > Mail: ma6174@163.com 
  > Created Time: 2016年04月06日 星期三 15时27分43秒
 ************************************************************************/

#include<iostream>
#include "screen.h"
using namespace std;


int main()
{

	Screen<5, 5> scr('c');
	Screen<5, 5> scr2;

	// output src to the screen
	std::cout<<scr;
	// input connet  to the  src 
	std::cin>>scr2;
	// test input
	std::cout<<scr2;

	return 0;
}
