/*
 * =====================================================================================
 *
 *       Filename:  10.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月28日 18时10分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 10.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年01月28日 星期四 18时10分00秒
 ************************************************************************/

#include<iostream>
#include<bitset>
using namespace std;

int main ( int argc, char *argv[] )
{
	bitset<32> bits;
	bits.set(1);
	bits.set(2);
	bits.set(3);
	bits.set(5);
	bits.set(8);
	bits.set(13);
	bits.set(21);

	cout << "bits = " << bits << endl;

	unsigned long long ull = bits.to_ullong();
	cout << "ull = " << ull << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
