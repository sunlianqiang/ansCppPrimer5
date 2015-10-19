/*
 * =====================================================================================
 *
 *       Filename:  4.22_2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月14日 16时20分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 4/4.22_2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月14日 星期三 16时20分38秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;
int main ( int argc, char *argv[] )
{
	string finalgrade;
	int grade;
	while(cin>>grade)
	{
		if(grade>90)
			finalgrade = "high score";
		else if(grade >75)
			finalgrade = "pass";
		else if(grade >=60)
			finalgrade = "low pass";
		else 
			finalgrade = "fail";
		
		cout << grade << " " << finalgrade <<endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */

