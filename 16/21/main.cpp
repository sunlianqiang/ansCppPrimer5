/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月08日 12时12分51秒
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
#include<memory>
using namespace std;

class DebugDelete {
	public:
		DebugDelete(std::ostream &s = std::cerr) : os(s) {
		}
		template <typename T> void operator() (T *p) const {
			os << "deleting unique_ptr" << std::endl; 
			delete p;
		}
	private:
		std::ostream &os;
};

int main ( int argc, char *argv[] )
{
	double *p = new double;
	DebugDelete d;
	d(p);

	int *ip = new int;
	DebugDelete()(ip);

	unique_ptr<int, DebugDelete> p1(new int, DebugDelete());
	unique_ptr<string, DebugDelete> p2(new string, DebugDelete());
	return 0;
}				/* ----------  end of function main  ---------- */
