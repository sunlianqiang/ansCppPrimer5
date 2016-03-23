/*
 * =====================================================================================
 *
 *       Filename:  IfThenElse.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月21日 16时18分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */


#include<iostream>
using namespace std;

/*
 * =====================================================================================
 *        Class:  IfThenElse
 *  Description:  
 * =====================================================================================
 */
class IfThenElse
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		IfThenElse ();                             /* constructor */

		/* ====================  ACCESSORS     ======================================= */
		int operator()(int a, bool flag, int c) {

			return (flag)?a:b;
		}

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:

}; /* -----  end of class IfThenElse  ----- */

