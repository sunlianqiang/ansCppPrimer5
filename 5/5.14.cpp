/*
 * =====================================================================================
 *
 *       Filename:  5.14.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月19日 18时38分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 5/5.14.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月19日 星期一 18时38分35秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	string s1, s2, maxs;
	unsigned cnt = 1, maxcnt = 0;
	if(! (cin>>s1) )
		return 0;
	while(cin>>s2)
	{
		if(s2 == s1)
		{
			++cnt;
			if(cnt > maxcnt)
			{
				maxs = s2;
				maxcnt = cnt;
			}
		}
		else
		{
			cnt = 1;
			s1 = s2;
		}

	}

	cout<< maxs << " occured " << maxcnt << "times" <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */

