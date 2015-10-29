/*
 * =====================================================================================
 *
 *       Filename:  6.17.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 21时07分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.17.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 21时07分45秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  hasupper
 *  Description:  
 * =====================================================================================
 */
bool hasupper (const string &s)
{
	for(auto c:s)
	{
		if ( isupper(c) )
			return true;
	}
	return false;
}		/* -----  end of function hasupper  ----- */
int main ( int argc, char *argv[] )
{
	string s1= "jsfljsfl";
	if( hasupper(s1) )
		cout<< "has upper";
	else
		cout<< s1 << " don't has upper letter!" << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
