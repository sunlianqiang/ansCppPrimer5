/*
 * =====================================================================================
 *
 *       Filename:  3.43_1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 21时52分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.43_1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 21时52分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main ( int argc, char *argv[] )
{
	int ia[3][4] = {
		{0, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 10, 11}
	};

	cout<<"method 1:"<<endl;
	for(int (&row)[4]:ia)
	{
		for(int &i:row)
		{
			cout<< i << " ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"method 2:"<<endl;
	for(size_t row=0; row<3; ++row)
	{
		for(size_t col=0; col<4; ++col)
		{
			cout<< ia[row][col] << " ";
		}
		cout<<endl;
	}
	cout<<endl;

	cout<<"method 3:"<<endl;
	for(int (*prow)[4]=ia; prow != (ia+3); ++prow)
	{
		for(int *pcol=*prow; pcol != (*prow+4); ++pcol)
		{
			cout<< *pcol << " ";
		}
		cout<<endl;
	}
	cout<<endl;

	return 0;
}				/* ----------  end of function main  ---------- */

