/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月26日 16时28分28秒
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
    > Created Time: 2016年03月26日 星期六 16时28分28秒
 ************************************************************************/

#include<iostream>
#include	"Base.h"
using namespace std;

int main ( int argc, char *argv[] )
{
	Pub_Derv d1;
	Priv_Derv d2;
	Prot_Derv d3;

	Derived_from_Public dd1;
	Derived_from_Private dd2;
	Derived_from_Protected dd3;

	Base *p = &d1;
	//p = &d2;
	//p = &d3;
	p = &dd1;
	//p = &dd2;
	//p = &dd3;
	return 0;
}				/* ----------  end of function main  ---------- */
