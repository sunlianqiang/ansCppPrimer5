/*
 * =====================================================================================
 *
 *       Filename:  52.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月27日 11时11分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
  > File Name: 52.cpp
  > Author: ma6174
  > Mail: ma6174@163.com 
  > Created Time: 2015年11月27日 星期五 11时11分22秒
 ************************************************************************/

#include<iostream>
#include	<stack>
#include	<string>
using namespace std;

void compute (stack<char> &cs, stack<int> &is)
{
	if(cs.empty() || cs.top() == '(' || is.size() < 2)
		return ;

	int num1, num2, ret;
	num1 = num2 = ret = 0;
	char opt;
	num2 = is.top();
	is.pop();
	num1 = is.top();
	is.pop();
	opt = cs.top();
	cs.pop();
	switch(opt)
	{
		case '+':
			ret = num1 + num2;
			break;
		case '-':
			ret = num1 - num2;
	}
	is.emplace(ret);
	cout << "opt: " << opt << ", ret: " << ret << endl; 

}		/* -----  end of function compute  ----- */
int main ( int argc, char *argv[] )
{
	stack<char> cstack;
	stack<int> istack;
	string num("1234567890");
	string str;
	while (cin >> str)
	{
		if (str.find_first_of(num) != string::npos)
		{
			istack.emplace(stoi(str));
			cout << "push in istack " << str << endl;
			compute(cstack, istack);
		}
		else if ( str != ")")
		{
			cstack.emplace(str.at(0));
			cout << "push in cstack " << str << endl;
		}
		else
		{
			cout << "compute ()" << endl;
			while (cstack.top() != '(')
			{
				compute(cstack, istack);
			}
			if (cstack.top() == '(')
				cstack.pop();

			compute(cstack, istack);
		}

		cout << "top of istack: " << istack.top() << endl;	
	}
	return 0;
}				/* ----------  end of function main  ---------- */

