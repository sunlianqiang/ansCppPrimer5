/*
 * =====================================================================================
 *
 *       Filename:  8.1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月16日 15时45分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
  > File Name: 8.1.cpp
  > Author: ma6174
  > Mail: ma6174@163.com 
  > Created Time: 2015年11月16日 星期一 15时45分56秒
 ************************************************************************/

#include<iostream>
#include	<istream>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  input
 *  Description:  
 * =====================================================================================
 */
istream& input (istream& is, string log)
{
	cout << log <<endl;
	string in;
	while (is>>in)
	{
		cout << in << endl;
	}
	is.clear();
	return is;
}		/* -----  end of function input  ----- */
int main ( int argc, char *argv[] )
{
	input(cin, "first: ");
	input(cin, "second:");
	return 0;
}				/* ----------  end of function main  ---------- */
