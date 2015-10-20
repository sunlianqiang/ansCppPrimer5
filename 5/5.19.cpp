/*
 * =====================================================================================
 *
 *       Filename:  5.19.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月20日 11时06分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 5/5.19.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月20日 星期二 11时06分25秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

int main ( int argc, char *argv[] )
{
	string s1, s2;
	do{
		cout << "pls input two string: " <<endl;
		if (cin>>s1>>s2 )
		{
			if(s1.size() == s2.size() )
				cout<< "same size" <<endl;
			else if ( s1.size() > s2.size() ) 
				cout << s2 << endl;
			else
				cout << s1 << endl;
		}
		
	}
	while(cin);
	return 0;
}				/* ----------  end of function main  ---------- */
