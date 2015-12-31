/*
 * =====================================================================================
 *
 *       Filename:  24.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月31日 15时13分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 24.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月31日 星期四 15时13分34秒
 ************************************************************************/

#include<iostream>
#include	<cstring>
#include	<string>
using namespace std;

int main ( int argc, char *argv[] )
{
	string str;
	if (getline(cin,str))
	{
		char *p = new char[str.size()];
		strcpy(p, str.c_str());
		cout << "p:" << p << endl;
		
		delete [] p;
	}
	else
	{
		cerr << "input error!"<< endl;
	}

	return 0;
}				/* ----------  end of function main  ---------- */
