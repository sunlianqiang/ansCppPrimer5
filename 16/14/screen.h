/*
 * =====================================================================================
 *
 *       Filename:  screen.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月06日 15时12分55秒
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
using namespace std;

/*
 * =====================================================================================
 *        Class:  Screen
 *  Description:  
 * =====================================================================================
 */
template <unsigned H, unsigned W>
class Screen
{
	typedef std::string::size_type pos;
	public:

	/* ====================  LIFECYCLE     ======================================= */
	Screen () = default;
	Screen (char c) : contents(H*W, c) {
	}/* constructor */

	/* ====================  ACCESSORS     ======================================= */
	char get() const              // get the character at the cursor
	{
		return contents[cursor]; }       // implicitly inline
	Screen &move(pos r, pos c);      // can be made inline later

	friend std::ostream & operator<< ( std::ostream &os , const Screen<H, W> & c ) 
	{

		unsigned int i, j;
		for( i=0 ;i<c.height; i++ )
		{

			os<<c.contents.substr(0, W)<<std::endl;
		}
		return os;
	}

	friend std::istream & operator>> ( std::istream &is , Screen &  c )
	{

		char a;
		is>>a;
		std::string temp(H*W, a);
		c.contents = temp;
		return is;
	}

	/* ====================  MUTATORS      ======================================= */

	/* ====================  OPERATORS     ======================================= */

	/* ====================  DATA MEMBERS  ======================================= */

	private:
	pos cursor = 0;
	unsigned height = H;
	unsigned width = W;
	string contents;
}; /* ----------  end of template class Screen  ---------- */

template<unsigned H, unsigned W>
inline Screen<H, W>& Screen<H, W>::move(pos r, pos c)
{

	    pos row = r * width;
		    cursor = row + c;
			    return *this;
}
