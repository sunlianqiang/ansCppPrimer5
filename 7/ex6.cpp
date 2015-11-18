/*
 * =====================================================================================
 *
 *       Filename:  ex6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月03日 12时25分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: ex6.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年11月03日 星期二 12时25分53秒
 ************************************************************************/

#include<iostream>
using namespace std;


 
class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);
    static double interestRate;
private:
    std::string owner;
    double amount;
    static double initRate();
};
 
void Account::rate(double newRate)
{
	interestRate = newRate;
}

double Account::initRate()
{
	return 6.5;
}


double Account::interestRate = initRate();


int main ( int argc, char *argv[] )
{
	double r = Account::rate();
	cout << "r: " << r << endl;
	cout << "interestRate: " << Account::interestRate << endl;

	Account ac1;
	return 0;
}				/* ----------  end of function main  ---------- */
