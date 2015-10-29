/*
 * =====================================================================================
 *
 *       Filename:  Screen.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年10月28日 18时44分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Giant
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: Screen.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2015年10月28日 星期三 18时44分05秒
 ************************************************************************/

#include<iostream>
#include	"Screen.h"
using namespace std;

Screen Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

