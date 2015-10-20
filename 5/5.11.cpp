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
#include	<cstdio>
using namespace std;

int main ( int argc, char *argv[] )
{
	char ch;
	unsigned aCnt, eCnt, iCnt, oCnt, uCnt, space, tab, changeline;
	aCnt = eCnt = iCnt = oCnt = uCnt = space = tab = changeline = 0;
	while(cin.get(ch))
	{
		switch(ch)
		{
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			case ' ':
				++space;
				break;
			case '\t':
				++tab;
				break;
			case '\n':
				++changeline;
				break;
		}
	}

	cout<< aCnt <<endl;
	cout<< eCnt <<endl;
	cout<< iCnt <<endl;
	cout<< oCnt <<endl;
	cout<< uCnt <<endl;
	cout<< space <<endl;
	cout<< tab <<endl;
	cout<< changeline <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
