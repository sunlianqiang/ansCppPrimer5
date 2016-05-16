/*
 * =====================================================================================
 *
 *       Filename:  vec.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年04月06日 15时39分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  sun lianqiang (milton), 170262941@qq.com
 *        Company:  Lianqiang Co. Ltd
 *
 * =====================================================================================
 */

#include<iostream>
#include<memory>
using namespace std;

/*
 * =====================================================================================
 *        Class:  Vec
 *  Description:  
 * =====================================================================================
 */
template < class T >
class Vec
{
	public:

		/* ====================  LIFECYCLE     ======================================= */
		Vec () :
			element(nullptr), first_free(nullptr), cap(nullptr) {
			}/* constructor */
		Vec(initializer_list<T> il);
		Vec(const Vec&);
		Vec(Vec&&) noexcept;
		Vec &operator=(const Vec&);
		Vec &operator=(Vec&&) noexcept;
		~Vec();

		/* ====================  ACCESSORS     ======================================= */
		void push_back(const T&);
		size_t size() const {
			return first_free - element;
		}
		size_t capacity() const {
			return cap - element;
		}
		T *begin() const {
			return element;
		}
		T *end() const {
			return first_free;
		}

void resize(std::size_t n);

void resize(std::size_t n, const T &t);

		/* ====================  MUTATORS      ======================================= */


		/* ====================  OPERATORS     ======================================= */

		/* ====================  DATA MEMBERS  ======================================= */
	protected:

	private:
		std::allocator<T> alloc;
		void chk_n_alloc() {
			if (size() == capacity())
				reallocate();
		}
		std::pair<T*, T*> alloc_n_copy(const T*, const T*);
		void free();
		void reallocate();
		T* element;
		T* first_free;
		T* cap;

}; /* ----------  end of template class Vec  ---------- */

template<typename T>
Vec<T>::Vec(initializer_list<T> l) {
	T* const newData = alloc.allocate(l.size());

	// copy element from l to the address allocated
	T* p = newData;
	for(const auto &t : l)
		alloc.construct(p++, t);

	// build data structure
	element = newData;
	first_free = cap = element + l.size();

}

	template < class T >
void Vec<T>::push_back (const T& s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}		/* -----  end of method Vec<T>::push_back  ----- */

	template < class T >
pair<T*, T*> Vec<T>::alloc_n_copy (const T* b, const T* e)
{
	auto data = alloc.allocate(e - b);
	return {
		data, uninitialized_copy(b, e, data)
	};
}		/* -----  end of method Vec<T>::alloc_n_copy  ----- */

	template < class T >
void Vec<T>::free (  )
{
	if (element) {
		for (auto p = first_free; p != element;)
			alloc.destroy(--p);
		alloc.deallocate(element, cap - element);
	}
}		/* -----  end of method Vec<T>::free  ----- */

	template < class T >
Vec<T>::Vec (const Vec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());
	element = newdata.first;
	first_free = cap = newdata.second;
}		/* -----  end of method Vec<T>::Vec  ----- */

	template < class T >
Vec<T>::~Vec (  )
{
	free();
}		/* -----  end of method Vec<T>::~Vec  ----- */

	template < class T >
Vec<T>& Vec<T>::operator= (const Vec<T> &rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	element = data.first;
	first_free = cap = data.second;
	return *this;
}		/* -----  end of method Vec<T>::operator=  ----- */

	template < class T >
void Vec<T>::reallocate (  )
{
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata  = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = element;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));

	free();
	element = newdata;
	first_free = dest;
	cap = element + newcapacity;
}		/* -----  end of method Vec<T>::reallocate  ----- */

	template < class T >
Vec<T>::Vec(Vec &&s) noexcept : element(s.element), first_free(s.first_free), cap(s.cap)
{
	s.element = s.first_free = s.cap = nullptr;
}		/* -----  end of method Vec<T>::Vec  ----- */

template < class T >
Vec<T>& Vec<T>::operator=(Vec &&rhs) noexcept
{
	if (this != &rhs) {
		free();
		element = rhs.element;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.element = rhs.first_free = rhs.cap = nullptr;
	}
	return *this;
}		/* -----  end of method Vec<T>::operator=  ----- */

/*
 *  @brief  Resizes to the specified number of element.
 *  @param  n  Number of element the %vector should contain.
 *
 *  This function will resize it to the specified
 *  number of element.  If the number is smaller than the
 *  current size it is truncated, otherwise
 *  default constructed element are appended.
 */
	template<typename T>
void Vec<T>::resize(std::size_t n)
{

	resize(n, T());
}



/*
 *  @brief  Resizes it to the specified number of element.
 *  @param  __new_size  Number of element it should contain.
 *  @param  __x  Data with which new element should be populated.
 *
 *  This function will resize it to the specified
 *  number of element.  If the number is smaller than the
 *  current size the it is truncated, otherwise
 *  the it is extended and new element are populated with
 *  given data.
 */
	template<typename T>
void Vec<T>::resize(std::size_t n, const T &t)
{

	if(n < size())
	{

		// destroy the range [element+n, first_free) using destructor
		for(auto p = element + n; p != first_free;   )
			alloc.destroy(p++);
		// update first_free to point to the new address
		first_free = element + n;
	}
	else if(n > size())
	{

		for (auto i = size(); i != n; ++i)
			push_back(t);
	}
}
