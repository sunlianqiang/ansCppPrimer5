/*
 * =====================================================================================
 *
 *       Filename:  12.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月28日 18时20分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 12.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年01月28日 星期四 18时20分03秒
 ************************************************************************/

#include<iostream>
#include<bitset>
using namespace std;

/*
 * =====================================================================================
 *        Class:  Quiz
 *  Description:  
 * =====================================================================================
 */
class Quiz
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		Quiz ();                             /* constructor */
		Quiz (string s):quiz(s) {
		}/* constructor */

		/* ====================  ACCESSORS     ======================================= */
		unsigned size() {
			return quiz.size();
		}

		bool test(unsigned i)
		{
			return quiz[i];
		}
		/* ====================  MUTATORS      ======================================= */
void updateAns (unsigned index, bool ans)
{
	quiz.set(index, ans);
	return ;
}		/* -----  end of function updateAns  ----- */

		/* ====================  OPERATORS     ======================================= */
		void PrintPoint(Quiz ans1);

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		bitset<100> quiz;

}; /* -----  end of class Quiz  ----- */

void Quiz::PrintPoint (Quiz ans1)
{
	if (this->size() < ans1.size())
	{
		cerr << "ans1 too much!" << endl;
		return;
	}

	unsigned point = 0;
	for (decltype(this->size()) i = 0; i < this->size(); ++i)
	{
		if (this->test(i) == ans1.test(i))
			++point;
	}

	cout << "point: " << point << endl;
	return ;
}		/* -----  end of function PrintPoint  ----- */
int main ( int argc, char *argv[] )
{
	Quiz ansStand("1111");
	Quiz ans1("0000");
	ansStand.PrintPoint(ans1);
	return 0;
}				/* ----------  end of function main  ---------- */
