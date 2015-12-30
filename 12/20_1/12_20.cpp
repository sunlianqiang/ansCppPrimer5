/*
 * =====================================================================================
 *
 *       Filename:  12_20.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月29日 11时41分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 12_20.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月29日 星期二 11时41分36秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include	"12_19.h"
using namespace std;

int main ( int argc, char *argv[] )
{
	StrBlob blob;
	fstream in("input");
	for (string str; getline(in, str);)
		blob.push_back(str);

	for (StrBlobPtr sbegin(blob.begin()), send(blob.end()); sbegin != send; sbegin.incr())
		cout << sbegin.deref() << endl;
		
	return 0;
}				/* ----------  end of function main  ---------- */
