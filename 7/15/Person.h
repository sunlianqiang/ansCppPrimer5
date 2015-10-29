/*
 * =====================================================================================
 *
 *       Filename:  Person.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月28日 11时21分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: Person.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月28日 星期三 11时21分51秒
 ************************************************************************/

#include<iostream>
#include	<string>
using namespace std;

Person{
	Person() = default;
	Person(const string name1, const string add1) : name(name1), add(add1){
	};
	string name;
	string add;

	string getName() const {
		return name;
	}
	string getAdd() const {
		return add;
	}
};

ostream& print(ostream&, const Person&);
istream& read(istream&, Person&);

