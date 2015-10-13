/*
 * =====================================================================================
 *
 *       Filename:  3.16.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月13日 12时09分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 3/3.16.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月13日 星期二 12时09分27秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<string>
using namespace std;

int main ( int argc, char *argv[] )
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout<< "size of v1" << " are: " << v1.size() << ", "  <<endl;

	cout<< "size of v2" << " are: " << v2.size() << ", "  <<endl;
	cout<< "content:";
	for(auto it2 = v2.cbegin(); it2 != v2.cend(); ++it2)
	{
		cout<< *it2 << ",";
	}
	cout<<endl;

	cout<< "size of v3" << " are: " << v3.size() << ", "  <<endl;
	cout<< "content:";
	for(auto it3 = v3.cbegin(); it3 != v3.cend(); ++it3)
	{
		cout<< *it3 << ",";
	}
	cout<<endl;

	cout<< "size of v4" << " are: " << v4.size() << ", "  <<endl;
	cout<< "content:";
	for(auto it4 = v4.cbegin(); it4 != v4.cend(); ++it4)
	{
		cout<< *it4 << ",";
	}
	cout<<endl;

	cout<< "size of v5" << " are: " << v5.size() << ", " << "content: "<< v5[0] << ", " << v5[1]<<endl;
	cout<< "size of v6" << " are: " << v6.size() << ", "  <<endl;
	cout<< "content:";
	for(auto it6 = v6.cbegin(); it6 != v6.cend(); ++it6)
	{
		cout<< *it6 << ",";
	}
	cout<<endl;

	cout<< "size of v7" << " are: " << v7.size() << ", "  <<endl;
	cout<< "content:";
	for(auto it7 = v7.cbegin(); it7 != v7.cend(); ++it7)
	{
		cout<< *it7 << ",";
	}
	cout<<endl;

	
	return 0;
}				/* ----------  end of function main  ---------- */
