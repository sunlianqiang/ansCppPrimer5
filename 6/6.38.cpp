/*
 * =====================================================================================
 *
 *       Filename:  6.38.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月21日 16时57分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 6/6.38.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月21日 星期三 16时57分38秒
 ************************************************************************/

#include<iostream>
using namespace std;

int odd[] = {
	1, 3, 5, 7, 9
};
int even[] = {
	0, 2, 4, 6, 8
};
decltype(odd) *arrPtr(int i)
{
	return (i % 2) ? &odd : &even;
}
decltype(odd) &arrPtr1(int i)
{
	return (i % 2) ? odd : even;
}
decltype((odd)) arrPtr2(int i)
{
	return (i % 2) ? odd : even;
}
int main ( int argc, char *argv[] )
{
	decltype(odd) *arrptr = arrPtr(3);
	for (auto it = begin(*arrptr); it != end(*arrptr); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;

	decltype(odd) &arrptr1 = arrPtr2(2);
	for (auto it = begin(arrptr1); it != end(arrptr1); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
