/*
 * =====================================================================================
 *
 *       Filename:  55.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月22日 12时24分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/55.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月22日 星期四 12时24分31秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;


int add (int a, int b)
{
	return a+b;
}		/* -----  end of function add  ----- */

int jian(int a, int b)
{
	return a-b;
}		/* -----  end of function add  ----- */

int mul (int a, int b)
{
	return a*b;
}		/* -----  end of function add  ----- */

int division (int a, int b)
{
	if (0 == b)
		cerr << __func__ << "b can't be 0" << endl;
	return a/b;
}		/* -----  end of function add  ----- */
int main ( int argc, char *argv[] )
{
	using PF = int (*)(int, int);
	vector<PF> pvec{
		&add, &jian, &mul, &division
	};

	for(auto pf:pvec)
		cout << pf(8,4) << endl;

	return 0;
}				/* ----------  end of function main  ---------- */

