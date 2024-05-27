#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// Custom class: MutantStack
#include <deque>
#include <stack>
template<class T, class Container = std::deque< T > >
class	MutantStack : public std::stack<T, Container>
{
	public:
		// Constructor
		MutantStack	(	void	){};

		// Copy constructor
		MutantStack	(	const MutantStack& that	)
		{
			*this = that;	
		}

		// Copy assignment operator overload
		MutantStack& operator = (const MutantStack& that)
		{
			std::stack<T, Container>::operator=(that);
			return *this;
		}

		// Destructor
		~MutantStack	(void){};

		typedef typename Container::iterator	iterator;

		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}

	
	protected:
		/*_*/;

	private:
		/*_*/;
};

#endif

