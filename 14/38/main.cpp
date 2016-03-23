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

#include<iostream>
#include	<vector>
#include	<algorithm>
#include	<string>
using namespace std;
using namespace std::placeholders;

class StringLen {
	public:
	StringLen(unsigned l) : len(l) {
	}
	bool operator()(string s) {
		return len == s.length();
	}

	private:
	unsigned len;
};

int main ( int argc, char *argv[] )
{
	vector<string> svec = {
		"1", "1", "22", "333", "333", "4444"
	};
	int len = 1;
	cout << "pls input a integer length:" <<endl;
	cin >> len;
	int count = count_if(svec.begin(), svec.end(), StringLen(len));

	cout << "vec has " << count << " strings which lens are " << len << endl;
	return 0;
}				/* ----------  end of function main  ---------- */
