/*
 * =====================================================================================
 *
 *       Filename:  5.9.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月19日 17时45分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 5/5.9.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月19日 星期一 17时45分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main ( int argc, char *argv[] )
{
	char ch;
	unsigned vowelCnt = 0;
	while(cin>>ch)
	{
		if('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch)
			++vowelCnt;
	}

	cout<< vowelCnt <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
