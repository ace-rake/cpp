#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <exception>
#include <iostream>
#include <ostream>

// Custom class: Array
template<class T = int>
class	Array
{
	public:
		// Constructor
		Array<T>	(	void	)
		{
			_n = 0;
			_var = new T[_n];
		};
		Array<T>	(	size_t n	)
		{
			_n = n;
			_var = new T[n];
		}
		Array<T>	(	T, size_t n	)
		{
			_n = n;
			_var = new T[n];
		}

		// Copy constructor
		Array<T>	(	const Array<T>& other	)
		{
			*this = other;
		};

		// Copy assignment operator overload
		Array& operator = (const Array& other)
		{
			/* std::cout << "Array:\tcopying object (assignment)\n"; */
			if (this != &other)
			{
				_n = other.getSize();
				delete[] _var;
				_var = new T[_n];
				for (size_t n = 0; n < _n; ++n)
					_var[n] = other[n];
			}
			return (*this);
		};

		// Straight bracket operator overload
		T& operator [] (size_t n)const
		{
			if (n >= _n)
				throw outOfBoundsException();
			return _var[n];

		}

		// Out of bounds exception
		class outOfBoundsException: public std::exception
		{
			public :
			virtual char * what(void)const throw(){
				return ((char *)"index out of bounds\n");
			}

		};


		// Destructor
		~Array<T>	(void)
		{
			delete[] _var;
		};

		void	setNElement	(	T t, size_t n	)
		{
			if ( n >= _n)
				throw outOfBoundsException();
			_var[n] = t;
		};

		T *	getVar(	void	)const{return _var;};
		size_t	getSize	(	void	)const{return _n;}

	protected:

	private:
		T *	_var;
		size_t	_n;
};

template <typename T>
std::ostream& operator << (std::ostream& o, Array<T> arr)
{
	for (size_t n = 0 ; n < arr.getSize(); n++)
		o << arr[n] << " ";
	return o;
}
#endif
