/*
 * =====================================================================================
 *
 *       Filename:  23.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月31日 14时56分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 23.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月31日 星期四 14时56分39秒
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main ( int argc, char *argv[] )
{
	char *p1 = "hello";
	char *p2 = " world";
	int size = strlen(p1) + strlen(p2) + 1;
	cout << size << endl;
	char *p = new char[size];
	strcpy(p, p1);
	strcat(p, p2);
	cout << p << endl;

	delete [] p;
	return 0;
}				/* ----------  end of function main  ---------- */
