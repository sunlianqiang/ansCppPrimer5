/*
 * =====================================================================================
 *
 *       Filename:  31.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月24日 14时42分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 31.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月24日 星期三 14时42分18秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
#include	"HasPtr.h"
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<HasPtr> vh;
	HasPtr a("a",1);
	HasPtr b("b");
	HasPtr c("c",2);
	vh.push_back(a);
	vh.push_back(b);
	vh.push_back(c);

	for (auto h : vh)
	{
		h.show();
	}

	sort(vh.begin(), vh.end());
	cout << "after sort:" << endl;
	for (auto h : vh)
	{
		h.show();
	}
	swap(a, b);
	return 0;
}				/* ----------  end of function main  ---------- */
