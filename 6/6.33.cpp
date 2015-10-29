/*
 * =====================================================================================
 *
 *       Filename:  6.33.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 15时26分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.33.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 15时26分55秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;

void printvec (vector<int>::const_iterator itbegin,  vector<int>::const_iterator itend)
{
	if (itbegin != itend)
	{
		cout << *itbegin << " ";
		printvec(++itbegin, itend);
	}
	else
	{
		cout<<endl;	
		return ;
	}
}		/* -----  end of function printvec  ----- */
int main ( int argc, char *argv[] )
{
	vector<int> ivec{
		1, 2, 3, 4, 5
	};

	printvec(ivec.begin(), ivec.end());

	return 0;
}				/* ----------  end of function main  ---------- */

