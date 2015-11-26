/*
 * =====================================================================================
 *
 *       Filename:  28.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月25日 18时18分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 28.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月25日 星期三 18时18分56秒
 ************************************************************************/

#include<iostream>
#include	<forward_list>
using namespace std;

/*-----------------------------------------------------------------------------
 *  
 *-----------------------------------------------------------------------------*/
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  sinsert
 *  Description:  
 * =====================================================================================
 */
void sinsert (forward_list<string> &flst, const string str1, const string str2  )
{
	auto prev = flst.before_begin();
	auto curr = flst.begin();

	while(curr != flst.end())
	{
		if (*curr == str1)
		{
			flst.insert_after(curr, str2);
			return;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}

	flst.insert_after(prev, str2);
	return ;
}		/* -----  end of function sinsert  ----- */
int main ( int argc, char *argv[] )
{
	forward_list<string> flst = {
		"111", "222", "333", "444"
	};

	sinsert(flst, "222", "ok");
	sinsert(flst, "444", "ok4");

	cout << "flst: ";
	for (auto s : flst)
	{
		cout << s << ", ";
	}
	cout << endl;

	return 0;
}				/* ----------  end of function main  ---------- */
