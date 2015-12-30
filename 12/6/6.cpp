/*
 * =====================================================================================
 *
 *       Filename:  6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月16日 18时42分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月16日 星期三 18时42分33秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;
vector<int> *func (  )
{
	auto p = new vector<int>{
		1, 2, 3
	};
	return p;
}		/* -----  end of function func  ----- */
void input (vector<int> *p)
{
	p->push_back(10);
	return ;
}		/* -----  end of function input  ----- */
void output (vector<int> *p)
{
	for (auto i : *p)
	{
		cout << i << " ";
	}
	cout << endl;
	return ;
}		/* -----  end of function output  ----- */
int main ( int argc, char *argv[] )
{
	auto p1 = func();
	input(p1);
	output(p1);

	delete p1;
	return 0;
}				/* ----------  end of function main  ---------- */
