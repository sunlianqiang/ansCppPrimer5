/*
 * =====================================================================================
 *
 *       Filename:  PrintString.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月21日 16时21分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */


#include<iostream>
#include<string>
using namespace std;

/*
 * =====================================================================================
 *        Class:  PrintString
 *  Description:  
 * =====================================================================================
 */
class PrintString
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		PrintString (istream &i = cin) : is(i) {
		}/* constructor */

		/* ====================  ACCESSORS     ======================================= */
		string operator() (istream &i = cin) {
			string s;
			if(i >> s)
				return s;
			else 
				return "";
		}

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		istream &is;

}; /* -----  end of class PrintString  ----- */

