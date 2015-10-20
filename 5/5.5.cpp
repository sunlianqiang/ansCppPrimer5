/*
 * =====================================================================================
 *
 *       Filename:  5.5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月19日 14时16分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 5/5.5.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月19日 星期一 14时16分01秒
 ************************************************************************/

#include<iostream>
#include	<vector>
using namespace std;

int main ( int argc, char *argv[] )
{
	const vector<string> scores{
		"F", "D", "C", "B", "A", "A++"
	};
	
	string lettergrade;
	unsigned grade = 0;

	while(cin>>grade)
	{
	if(grade<60)
		lettergrade = scores[0];
	else
		lettergrade = scores[ (grade-50)/10 ];

	cout << "grade: " << lettergrade <<endl;
	}

	return 0;
}				/* ----------  end of function main  ---------- */
