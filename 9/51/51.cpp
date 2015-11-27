/*
 * =====================================================================================
 *
 *       Filename:  51.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月26日 18时44分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 51.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月26日 星期四 18时44分58秒
 ************************************************************************/

#include<iostream>
#include	<vector>
#include	<string>
using namespace std;

/*
 * =====================================================================================
 *        Class:  Date
 *  Description:  
 *
 * =====================================================================================
 */
class Date
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		Date ();                             /* constructor */
		Date (string s);                             /* constructor */

		/* ====================  ACCESSORS     ======================================= */
		void output() {
			cout << "year: " << year << ", month: " << month << ", day: " << day << endl;
		}

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		unsigned year;
		unsigned month;
		unsigned day;


}; /* -----  end of class Date  ----- */
Date::Date(string s)
{
	string s1(" ,/");
	string num("1234567890");
	vector<string> vmonth = {
		"Jan",
		"Feb",
		"Mar",
		"Apr",
		"May",
		"Jun",
		"Jul",
		"Aug",
		"Sep",
		"Oct",
		"Nov",
		"Dec"
	};

	string::size_type pos1, pos2;	
	pos1 = pos2 = 0;
	pos1 = s.find_first_of(s1);
	string smonth = s.substr(0, pos1);
	cout << "month: " << smonth << endl;
	cout << pos1 << endl;
	if (smonth.find_first_of(num) != string::npos)
	{
		month = stoi(smonth);
	}
	else
	{
		for (decltype(vmonth.size()) i = 0; i < vmonth.size(); ++i)	
		{
			if (vmonth[i] == smonth)
			{
				month = i + 1;
				break;
			}
		}
	}

	//day
	pos2 = s.find_first_of(s1, pos1);	
	string sday = s.substr(pos1, pos2 -1);
	cout << "day: " << sday << endl;
	day = stoi(sday);

	//year
	pos1 = pos2 +1;
	pos2 = s.find_first_of(s1, pos2 + 1);
	string syear = s.substr(pos2 + 1);
	year = stoi(syear);
	cout << "year: " << syear << endl;
}


int main ( int argc, char *argv[] )
{
	Date d("Jan 1 1900");
	d.output();

	return 0;
}				/* ----------  end of function main  ---------- */
