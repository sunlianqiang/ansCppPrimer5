/*
 * =====================================================================================
 *
 *       Filename:  Base.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月26日 14时11分11秒
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

class Base {
	public:
		void pub_mem();
		//void mmefcn(Base &b) { b = *this;}
	protected:
		int prot_mem;
	private:
	char priv_mem;
};

struct Pub_Derv : public Base {
		void mmefcn(Base &b) { b = *this;}
	int f() {
		return prot_mem;
	}
};

struct Priv_Derv : private Base {
		void mmefcn(Base &b) { b = *this;}
	int f1() const {
		return prot_mem;
	}
};
struct Prot_Derv : protected Base {
		void mmefcn(Base &b) { b = *this;}
	int f2() const {
		return prot_mem;
	}
};

struct Derived_from_Public : public Pub_Derv {
		void mmefcn(Base &b) { b = *this;}
	int use_base() {
		return prot_mem;
	}
};

struct Derived_from_Protected : public Prot_Derv {
		void mmefcn(Base &b) { b = *this;}
};
struct Derived_from_Private : public Priv_Derv {
		//void mmefcn(Base &b) { b = *this;}
	//int use_base() {
	//	return prot_mem;
	//}
};
