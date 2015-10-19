/*
 * =====================================================================================
 *
 *       Filename:  4.31.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月16日 16时12分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 4/4.31.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月16日 星期五 16时12分06秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> ivec(10);
	vector<int>::size_type cnt = ivec.size();
	for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;

	for(auto i:ivec)
		cout << i << " ";
	cout << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
