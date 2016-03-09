/*
 * =====================================================================================
 *
 *       Filename:  TreeNode.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月23日 22时31分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

/*************************************************************************
    > File Name: TreeNode.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年02月23日 星期二 22时31分00秒
 ************************************************************************/

#include<iostream>
using namespace std;

/*
 * =====================================================================================
 *        Class:  TreeNode
 *  Description:  
 * =====================================================================================
 */
class TreeNode
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		TreeNode () : value(""), count(new int(1)), left(nullptr), right(nullptr) {
		}
		TreeNode(const TreeNode &t) : value(t.value), count(t.count), left(t.left), right(t.right) {
			++*t.count;
		}
		TreeNode& operator=(const TreeNode &rhs) {
			++*rhs.count;
			if (--*count == 0)
			{
				ReleaseTree();
			}

			value = rhs.value;
			count = rhs.count;
			left = rhs.left;
			right = rhs.right;
			return *this;
		}
		void ReleaseTree()
		{
			if (left) {
					delete left;
					left = nullptr;
			}
			if (right) {
					delete right;
					right = nullptr;
			}
			delete count; 
			count = nullptr;
		}
		~TreeNode () {
			if (--*count == 0) 
				ReleaseTree();
		}
	protected:
	private:
		std::string value;
		int *count;
		TreeNode *left;
		TreeNode *right;

}; /* -----  end of class TreeNode  ----- */

/*
 * =====================================================================================
 *        Class:  BinStrTree
 *  Description:  
 * =====================================================================================
 */
class BinStrTree
{
	public:
		/* ====================  LIFECYCLE     ======================================= */
		BinStrTree () : root(new TreeNode()) {
		}/* constructor */
		BinStrTree (const BinStrTree &b) : root(new TreeNode(*b.root)) {
		}
		BinStrTree& operator=(const BinStrTree &bst) {
			TreeNode *new_root = new TreeNode(*bst.root);
			delete root;
			root = new_root;
			return *this;
		}
		~BinStrTree () {
				delete root;
		}
		/* ====================  ACCESSORS     ======================================= */

		/* ====================  MUTATORS      ======================================= */

		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		TreeNode *root;

}; /* -----  end of class BinStrTree  ----- */


int main ( int argc, char *argv[] )
{
	return 0;
}				/* ----------  end of function main  ---------- */
