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
	char ch1, ch2;
	ch1 = 0;
	unsigned aCnt, eCnt, iCnt, oCnt, uCnt, space, tab, changeline;
	aCnt = eCnt = iCnt = oCnt = uCnt = space = tab = changeline = 0;
	unsigned ffcnt, flcnt, ficnt;
	ffcnt = flcnt = ficnt = 0;
	while(cin.get(ch2))
	{
		switch(ch2)
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
		if ( ch1 == 'f')
		{
			switch(ch2)
			{
				case 'f':
					++ffcnt;
				break;
				case 'l':
					++flcnt;
				break;
				case 'i':
					++ficnt;
				break;
			}
		}
		ch1 = ch2;
	}

	cout<< aCnt <<endl;
	cout<< eCnt <<endl;
	cout<< iCnt <<endl;
	cout<< oCnt <<endl;
	cout<< uCnt <<endl;
	cout<< space <<endl;
	cout<< tab <<endl;
	cout<< changeline <<endl;

	cout << "ff, fl, fi" <<endl;
	cout<< ffcnt <<endl;
	cout<< flcnt <<endl;
	cout<< ficnt <<endl;

	return 0;
}				/* ----------  end of function main  ---------- */
