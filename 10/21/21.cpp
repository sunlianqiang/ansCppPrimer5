/*
 * =====================================================================================
 *
 *       Filename:  21.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月02日 14时22分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 21.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月02日 星期三 14时22分15秒
 ************************************************************************/

#include<iostream>
#include	<algorithm>
using namespace std;
bool func (unsigned &a)
{
	auto f= [&a]()->bool{
		if (a)
			return --a;
		else
			return a;
	};
	auto flag = f();
	if (flag)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return flag;
}		/* -----  end of function func  ----- */
int main ( int argc, char *argv[] )
{
	unsigned ia = 5;
	while (func(ia));	
	return 0;
}				/* ----------  end of function main  ---------- */

