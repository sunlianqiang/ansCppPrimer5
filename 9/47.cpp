/*
 * =====================================================================================
 *
 *       Filename:  47.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月26日 17时11分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 47.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月26日 星期四 17时11分59秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

void findnum1 (const string &s  )
{
	string num = "1234567890";
	string::size_type pos = 0;
	while ( (pos = s.find_first_of(num, pos)) != string::npos)
	{
		cout << s[pos++];
	}
	cout << endl;
	return ;
}		/* -----  end of function findnum1  ----- */
void findalp1 (const string &s  )
{
	string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string::size_type pos = 0;
	while ( (pos = s.find_first_of(alph, pos)) != string::npos)
	{
		cout << s[pos++];
	}
	cout << endl;
	return ;
}		/* -----  end of function findnum1  ----- */
void findalp2 (const string &s  )
{
	string num = "1234567890";
	string::size_type pos = 0;
	while ( (pos = s.find_first_not_of(num, pos)) != string::npos)
	{
		cout << s[pos++];
	}
	cout << endl;
	return ;
}		/* -----  end of function findnum1  ----- */
void findnum2 (const string &s  )
{
	string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string::size_type pos = 0;
	while ( (pos = s.find_first_not_of(alph, pos)) != string::npos)
	{
		cout << s[pos++];
	}
	cout << endl;
	return ;
}		/* -----  end of function findnum1  ----- */
int main ( int argc, char *argv[] )
{
	string s("ab2c3d7R4E6");

	findnum1(s);
	findalp1(s);
	
	findnum2(s);
	findalp2(s);
	
	return 0;
}				/* ----------  end of function main  ---------- */

