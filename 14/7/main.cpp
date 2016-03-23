/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月10日 11时17分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年03月10日 星期四 11时17分56秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include "String.h"
using namespace std;

int main ( int argc, char *argv[] )
{
	cout << "1" << endl;
	vector<String> vstr;
	//cout << "2" << endl;
	//String s("1");
	//s.show();
	//
	//
	//cout << "3" << endl;
	//vstr.push_back(s);
	//cout << "4" << endl;
	//vstr.push_back(s);
	//vstr.push_back(s);

	//
	cout << "push 2" << endl;
	vstr.push_back("2");
	cout << "push 4" << endl;
	vstr.push_back("4");
	cout << "push 3" << endl;
	vstr.insert(vstr.begin() + 1, "3");
	cout << "end" << endl;


	cout << "*************list*********" << endl;
	for (auto it = vstr.begin(); it != vstr.end(); ++it)
		cout << *it << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
