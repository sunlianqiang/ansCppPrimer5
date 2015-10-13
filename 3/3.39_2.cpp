/*
 * =====================================================================================
 *
 *       Filename:  3.39_2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 20时42分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.39_2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 20时42分06秒
 ************************************************************************/

#include<iostream>
#include	<cstring>
using namespace std;

int main ( int argc, char *argv[] )
{
	char s1[] = "hello";
	char s2[] = "hello";

	if( 0 != strcmp(s1,s2) )
		cout<< "s1 != s2" <<endl;
	else
		cout<< "s1 == s2" <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
