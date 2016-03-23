/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月21日 16时44分01秒
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
    > Created Time: 2016年03月21日 星期一 16时44分01秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<algorithm>
#include	"equal.h"
using namespace std;
using namespace std::placeholders;

class IntCompare {
	public:
		IntCompare(int v) : val(v) {
		}
		bool operator()(int v) {
			return val != v;
		}
	private:
		int val;
};

int main ( int argc, char *argv[] )
{
	vector<int> ivec = {
		1, 3, 5, 4, 5, 6, 1
	};

	//replace_if(ivec.begin(), ivec.end(), bind(Equal(), 5, _1)(), 8);
	replace_if(ivec.begin(), ivec.end(), IntCompare(5), 8);
	//replace_if(ivec.begin(), ivec.end(), bind(Equal(), 8, _1), 3);

	for (auto i : ivec)
		cout << i << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
