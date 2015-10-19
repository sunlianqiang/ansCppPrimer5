/*
 * =====================================================================================
 *
 *       Filename:  4.22_1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月14日 16时11分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 4/4.22_1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月14日 星期三 16时11分47秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

int main ( int argc, char *argv[] )
{
	int grade = 0;
	string finalgrade;
	while(cin>>grade)
	{
		finalgrade = (grade>90) ? "high pass" : (grade>75) ? "pass" : (grade<60) ? "fail" : "low pass";
		cout << grade << " " << finalgrade <<endl;
	}
	return 0;
}				/* ----------  end of function main  ---------- */
