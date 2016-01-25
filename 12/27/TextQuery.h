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

class QueryResult;
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
		using LineNo = vector<string>::size_type;
		TextQuery ();                             /* constructor */
		TextQuery (ifstream &infile) ;                             /* constructor */

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */
		QueryResult query(const string &str) const;

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		shared_ptr<vector<string>> file;
		map<string, shared_ptr<set<LineNo>>> wm;

}; /* -----  end of class TextQuery  ----- */



/*
 * =====================================================================================
 *        Class:  QueryResult
 *  Description:  
 * =====================================================================================
 */
class QueryResult
{
		friend ostream& print(ostream &out, const QueryResult& p);
	public:
		/* ====================  LIFECYCLE     ======================================= */
		QueryResult ();                             /* constructor */
		QueryResult(const string &s, shared_ptr<std::set<TextQuery::LineNo>> set, shared_ptr<vector<string>> v) : sought(s), lines(set), file(v) {
		}

		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	//protected:

	//private:
		string sought;
		shared_ptr<set<TextQuery::LineNo>> lines;
		shared_ptr<vector<string>>	file;

}; /* -----  end of class QueryResult  ----- */

ostream& print(ostream &out, const QueryResult& p);
