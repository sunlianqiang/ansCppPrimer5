/*
 * =====================================================================================
 *
 *       Filename:  44.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月22日 17时56分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include<functional>
#include<string>
#include<map>
using namespace std;

	int divide(int a, int b) {
		if (b == 0)
			return 0;
		else
			return a/b;
	}
int main ( int argc, char *argv[] )
{
	map<string, function<int(int,int)>> binops;

	binops.insert({
			"+", [](int a, int b) {
			return a + b;
			}
			});

	minus<int> intMinus;
	binops.insert( {"-", intMinus});
	
	int (*fp)(int,int) = divide;
	binops.insert({
			"/", divide
			});


	binops.insert({
			"*", multiplies<int>()
			});

	cout << "result of 10 + 5 is: " << binops["+"](10, 5) << endl;
	cout << "result of 10 - 5 is: " << binops["-"](10, 5) << endl;
	cout << "result of 10 * 5 is: " << binops["*"](10, 5) << endl;
	cout << "result of 10 / 5 is: " << binops["/"](10, 5) << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
