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
 *         Name:  tolowletter
 *  Description:  
 * =====================================================================================
 */
void tolowletter (string &s)
{
	for(auto &c:s)
	{
		c = tolower(c);
	}
	return ;
}		/* -----  end of function tolowletter  ----- */
int main ( int argc, char *argv[] )
{
	string s1= "jsfljAJLDFJsfl";
	tolowletter(s1);
		cout<< s1 << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
