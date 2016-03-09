/*
 * =====================================================================================
 *
 *       Filename:  30.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月24日 15时40分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 30.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月24日 星期三 15时40分55秒
 ************************************************************************/

#include<iostream>
#include	"HasPtr.h"
using namespace std;

int main ( int argc, char *argv[] )
{
	HasPtr a("a");
	HasPtr b(a);

	swap(a, b);
	return 0;
}				/* ----------  end of function main  ---------- */
