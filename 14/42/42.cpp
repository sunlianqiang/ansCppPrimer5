/*
 * =====================================================================================
 *
 *       Filename:  1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月22日 15时23分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main ( int argc, char *argv[] )
{
	cout << "quiz 1:" << endl;
	vector<unsigned> ivec = {
		1, 3, 1024, 1025, 2100
	};

	greater<unsigned> intGreater;
	int count = count_if(ivec.begin(), ivec.end(), bind(intGreater, 1024, std::placeholders::_1));
	cout << "count is " << count << endl;

	cout << "quiz 2:" << endl;
	vector<string> svec = {
		"pooh", "pooh", "slq", "pooh"
	};
	not_equal_to<string> nqtStr;
	auto it = find_if(svec.begin(), svec.end(), bind(nqtStr, "pooh", std::placeholders::_1));
	if (it == svec.end())
		cout << "can't find pooh" << endl;
	else
		cout << "the pos " << it - svec.begin() + 1<< " word is not pooh" << endl;

	cout << "quiz 3:" << endl;
	multiplies<unsigned> intMul;
//	for_each(ivec.begin(), ivec.end(), bind(intMul, 2, std::placeholders::_1));
	for (auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		*it = intMul(*it, 2);
//		cout << intMul(i, 2) << endl;
	}

	cout << "ivec: " << endl;
	for_each(ivec.begin(), ivec.end(), [](unsigned a){
			cout << a << endl;
			});
	return 0;
}				/* ----------  end of function main  ---------- */

