/*
 * =====================================================================================
 *
 *       Filename:  3.20.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 10时24分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.20.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 10时24分48秒
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

	for(auto it1=ivec.begin(); it1!=ivec.end() || (it1+1)!=ivec.end(); it1+=2)
	{
		auto it2 = it1 + 1;
		cout<< *it1 + *it2 << " ";

		if( (it2+1) == ivec.end() || (it2+2) == ivec.end() )
		{
			break;
		}
	}
	cout<<endl;

	for(auto it1=ivec.begin(), it2 =ivec.end()-1; it1 < it2 ; ++it1, --it2)
	{
		cout<< *it1 + *it2 << " ";
	}
	cout<<endl;

	return 0;
}				/* ----------  end of function main  ---------- */
