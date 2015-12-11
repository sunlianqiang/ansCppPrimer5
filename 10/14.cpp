/*
 * =====================================================================================
 *
 *       Filename:  14.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月01日 20时44分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 14.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月01日 星期二 20时44分29秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main ( int argc, char *argv[] )
{
	auto f = [](int a, int b){
		return a + b;
	};

	cout << f(1, 2) << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
