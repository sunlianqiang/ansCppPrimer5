/*
 * =====================================================================================
 *
 *       Filename:  14.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年12月28日 15时52分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: 14.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年12月28日 星期一 15时52分39秒
 ************************************************************************/

#include<iostream>
#include	<memory>
using namespace std;

struct destination {
	int d = 1;
};
struct connection {
	int c = 2;
};
connection connect(destination* d) {
	cout << string("connect, destination: ") << d->d << endl;
	connection c;
	return c;
};
void disconnect(connection c) {
	cout << "disconnect, connection: " << c.c << endl;
};
void end_connection(connection *p) {
	disconnect(*p);
}

void f (destination &d  )
{
	connection c = connect(&d);
	//shared_ptr<connection> p(&c, end_connection);
	shared_ptr<connection> p(&c, [](connection *p) {
			disconnect(*p);
			});
	return ;
}		/* -----  end of function f  ----- */
int main ( int argc, char *argv[] )
{ 
	destination d;
	f(d);
	return 0;
}				/* ----------  end of function main  ---------- */
