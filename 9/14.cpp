/*
 * =====================================================================================
 *
 *       Filename:  14.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月19日 18时07分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 14.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月19日 星期四 18时07分04秒
 ************************************************************************/

#include<iostream>
#include	<list>
#include	<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	char *pc1 = "tutuma";
	char *pc2 = "Hu";
	list<char*> clist = {
		pc1, pc2
	};

	vector<string> svec;
	svec.assign(clist.begin(), clist.end());

	for (auto s : svec)
	{
		cout << s << " ";
	}
	cout << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
