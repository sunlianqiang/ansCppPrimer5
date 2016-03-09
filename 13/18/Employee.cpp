/*
 * =====================================================================================
 *
 *       Filename:  Employee.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月19日 18时10分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: Employee.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月19日 星期五 18时10分08秒
 ************************************************************************/

#include<iostream>
using namespace std;

/*
 * =====================================================================================
 *        Class:  Employee
 *  Description:  
 * =====================================================================================
 */
class Employee
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		Employee () : Employee ("default");                             /* constructor */
		Employee (string n) : name(n), num(count++) {

		}/* constructor */

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
		unsigned long long num;
	protected:

	private:
		static unsigned long long count;

}; /* -----  end of class Employee  ----- */

unsigned long long Employee::count = 1;
