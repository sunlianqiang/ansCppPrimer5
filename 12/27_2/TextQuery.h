/*
 * =====================================================================================
 *
 *       Filename:  TextQuery.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年01月05日 22时09分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: TextQuery.h
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年01月05日 星期二 22时09分29秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<memory>
using namespace std;

/*
 * =====================================================================================
 *        Class:  TextQuery
 *  Description:  
 * =====================================================================================
 */
class TextQuery
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		TextQuery ();                             /* constructor */
		TextQuery (ifstream &infile) ;                             /* constructor */

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		shared_ptr<set<unsigned>> query(string str);

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		vector<string> lines;
		map<string, shared_ptr<set<unsigned>>> words;

}; /* -----  end of class TextQuery  ----- */



/*
 * =====================================================================================
 *        Class:  QueryResult
 *  Description:  
 * =====================================================================================
 */
class QueryResult
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		QueryResult ();                             /* constructor */

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		static ostream& print(ostream &out, shared_ptr<set<unsigned>> p);

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:

}; /* -----  end of class QueryResult  ----- */

