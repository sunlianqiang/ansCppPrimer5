/*
 * =====================================================================================
 *
 *       Filename:  equal.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月21日 16时42分25秒
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
 *        Class:  Equal
 *  Description:  
 * =====================================================================================
 */
class Equal
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		//Equal (int ai) : a(ai) {
		//}/* constructor */

		/* ====================  ACCESSORS     ======================================= */
		//bool operator()(int b) {
		//	return a != b;
		//}
		bool operator()(int a, int b) {
			return a != b;
		}

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		int a;

}; /* -----  end of class Equal  ----- */
