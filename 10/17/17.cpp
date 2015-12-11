/*
 * =====================================================================================
 *
 *       Filename:  7.1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月27日 20时48分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
  > File Name: 7/1/7.1.cpp
  > Author: ma6174
  > Mail: ma6174@163.com 
  > Created Time: 2015年10月27日 星期二 20时48分37秒
 ************************************************************************/

#include<iostream>
#include	<string>
#include	<fstream>
#include	<vector>
#include	<algorithm>
using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	string isbn() const{
		return bookNo;
	}
};

bool getData(ifstream& in, Sales_data & data)
{
	if (in)
	{
		in >> data.bookNo >> data.units_sold >> data.revenue;
		return true;
	}
	else 
		return false;

}

//没有const编译报错
bool compareIsbn (const Sales_data &s1, const Sales_data &s2)
{
	//return s1.isbn() < s2.isbn();
	return s1.bookNo < s2.bookNo;
}		/* -----  end of function compareIsbn  ----- */
void output (const vector<Sales_data> &data)
{
	for (auto & s : data)
	{
		cout << s.bookNo << ", " << s.units_sold << ", " << s.revenue << endl;
	}
	return ;
}		/* -----  end of function output  ----- */
int main ( int argc, char *argv[] )
{
	vector<Sales_data> vs; 
	Sales_data s1;
	if (argc != 2)
	{
		cerr << "para num error! need input file!" << endl;
		return -1;
	}
	string filename(argv[1]);
	ifstream input(filename);
	//ofstream output(argv[2], ofstream::app);
	while (getData(input, s1))
	{
		if (input)
			vs.emplace_back(s1);
	}

	cout << "before sort: " << endl;
	output(vs);
	cout << "after sort: " << endl;
	//sort(vs.begin(), vs.end(), compareIsbn);
	sort(vs.begin(), vs.end(), [](const Sales_data &s1, const Sales_data &s2){
			return s1.isbn() < s2.isbn();
			});
	output(vs);

	return -1;
}				/* ----------  end of function main  ---------- */
