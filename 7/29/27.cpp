/*
 * =====================================================================================
 *
 *       Filename:  27.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月28日 20时31分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 27.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月28日 星期三 20时31分28秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	"Screen.h"
using namespace std;
int main ( int argc, char *argv[] )
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";

	return 0;
}				/* ----------  end of function main  ---------- */

