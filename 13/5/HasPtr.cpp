/*
 * =====================================================================================
 *
 *       Filename:  HasPtr.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月25日 17时40分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: HasPtr.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年01月25日 星期一 17时40分45秒
 ************************************************************************/

#include<iostream>
using namespace std;

/*
 * =====================================================================================
 *        Class:  HasPtr
 *  Description:  
 * =====================================================================================
 */
class HasPtr
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		HasPtr ();                             /* constructor */
		HasPtr (const std::string &s = std::string()):
			ps(new std::string(s)), i(0) { }/* constructor */

		HasPtr (HasPtr &h):
			ps(new std::string(*h.getps())), i(h.geti()) { }/* constructor */
		/* ====================  ACCESSORS     ======================================= */
		std::string * getps() {
			return ps;
		}

		int geti() {
			return i;
		}
		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		std::string *ps;
		int i;

}; /* -----  end of class HasPtr  ----- */

