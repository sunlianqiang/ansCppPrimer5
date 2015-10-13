/*
 * =====================================================================================
 *
 *       Filename:  3.20_2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 10时29分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.20_2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 10时29分29秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> ivec;
	int i1;
	while(cin>>i1)
	{
		ivec.push_back(i1);
	}

	for(decltype(ivec.size()) it1 = 0, it2 = ivec.size()-1; it1 < it2; ++it1,--it2)
	{
		cout<< ivec[it1] + ivec[it2] <<endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */
