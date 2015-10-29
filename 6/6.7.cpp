/*
 * =====================================================================================
 *
 *       Filename:  6.7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 16时44分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.7.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 16时44分24秒
 ************************************************************************/

#include<iostream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  addcnt
 *  Description:  
 * =====================================================================================
 */
int addcnt (  )
{
	static int cnt = 0;

	return cnt++;
}		/* -----  end of function addcnt  ----- */
int main ( int argc, char *argv[] )
{
	for (size_t i=0; i<10; ++i)
	{
		cout << addcnt() << endl; 
	}
	return 0;
}				/* ----------  end of function main  ---------- */
