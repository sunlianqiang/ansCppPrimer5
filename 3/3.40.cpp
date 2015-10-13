/*
 * =====================================================================================
 *
 *       Filename:  3.40.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 20时58分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.40.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 20时58分34秒
 ************************************************************************/

#include<iostream>
#include	<cstring>
using namespace std;

int main ( int argc, char *argv[] )
{
	char s1[] = "hello";
	char s2[] = "hi";
	char s3[strlen(s1) + strlen(s2) -1];

	strcpy(s3,s1);
	strcat(s3," ");
	strcat(s3,s2);

	cout << s3 <<endl;
	return 0;
}				/* ----------  end of function main  ---------- */
