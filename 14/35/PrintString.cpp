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
		PrintString ();                             /* constructor */

		/* ====================  ACCESSORS     ======================================= */
		string operator() (istream &is) {
			string s;
			if(is >> s)
				return is;
			else 
				return s;
		}

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:

}; /* -----  end of class PrintString  ----- */

