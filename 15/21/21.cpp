/*
 * =====================================================================================
 *
 *       Filename:  21.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月26日 17时14分33秒
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

class Obj {
	public:
		virtual double getBiaomainji() = 0;
	private:
	double biaomianji;
}
class Obj2d : Obj {
	public:
		virtual double getBiaomainji() = 0;
}

class Fangge : Obj2d {
	public:
		virtual double getBiaomainji() override const;
	private:
	double lenth;
	double width;
}

class Circle : Obj2d {
	public:
		virtual double getBiaomainji() override const;
	private:
		double banjing;
}

class Obj3d : Obj{
	public:
		virtual double getBiaomainji() = 0;
	private:
	double tiji;
}

class Ball : Obj3d {
	public:
		virtual double getBiaomainji() override const;
	private:
		double banjing;
}

class Yuanzhui : Obj3d {
	public:
		virtual double getBiaomainji() override const;
	private:
		double dimianji;
		double high;
}
