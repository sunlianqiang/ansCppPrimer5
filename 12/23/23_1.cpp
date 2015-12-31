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
#include<string>
#include<cstring>
using namespace std;

int main ( int argc, char *argv[] )
{
	string s1 = "hello";
	string s2 = " world";
	int size = s1.size() + s2.size() + 1;
	cout << "size: " << size << endl;
	char *p = new char[size];
	strcpy(p, s1.c_str());
	strcat(p, s2.c_str());
	cout << p << endl;

	delete [] p;
	return 0;
}				/* ----------  end of function main  ---------- */
