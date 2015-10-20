/*
 * =====================================================================================
 *
 *       Filename:  5.23.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 15时28分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 5/5.23.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 15时28分08秒
 ************************************************************************/

#include<iostream>
#include	<stdexcept>
using namespace std;

int main ( int argc, char *argv[] )
{
	int i1, i2;
	while(cin>>i1>>i2 )
	{
		try{
			if (0 == i2)
				throw runtime_error("chushu cannot be 0!");
			cout<<i1/i2;
		}
		catch(runtime_error err)
		{
			cout<< err.what()
				<<"\nTry again? Enter y or n" << endl;
			char c;
			cin>> c;
			if (!cin || c == 'n')
				break;
		}
	}
	return 0;
}				/* ----------  end of function main  ---------- */
