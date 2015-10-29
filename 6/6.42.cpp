/*
 * =====================================================================================
 *
 *       Filename:  6.42.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 17时55分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.42.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 17时55分32秒
 ************************************************************************/

#include<iostream>
#include	"6.42.h"
using namespace std;

string make_plural (size_t ctr, const string &word, const string &ending  )
{
	return (ctr > 1) ? word + ending : word;
}		/* -----  end of function make_plural  ----- */
string make_plural1 (size_t ctr, const string &word = "success", const string &ending  )
{
	return (ctr > 1) ? word + ending : word;
}		/* -----  end of function make_plural  ----- */

int main ( int argc, char *argv[] )
{
	cout << make_plural(3, "fan", "s") << endl;
	cout << make_plural1(1, "success", "es") << endl;
	cout << make_plural1(3, "success", "es") << endl;
	cout << make_plural1(1, "failure") << endl;
	cout << make_plural1(3, "failure") << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
