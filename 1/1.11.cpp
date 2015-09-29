/*
 * =====================================================================================
 *
 *       Filename:  1.11.cpp
 *
 *    Description:  print all the nums between integer v1 and v2
 *
 *        Version:  1.0
 *        Created:  2015年09月28日 21时33分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 1/1.11.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年09月28日 星期一 21时33分14秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define EXIT_SUCCESS 0
	int
main ( int argc, char *argv[] )
{

	int v1, v2;
	cout<< "input v1, v2: " <<endl;
	while(cin>>v1>>v2)
	{
		if(v1==v2)
			cout<<v1<<endl;
		else if(v1>v2)
		{
			for(int i=v2; i<v1; ++i)
				cout<< i << " ";
		}
		else
		{
			for(int i=v1; i<v2; ++i)
				cout<< i << " ";
		}
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
