#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// Custom class: MutantStack
#include <stack>
template<class T>
class	MutantStack : public std::stack<T>
{
	public:
		// Constructor
		MutantStack	(	void	){};

		// Copy constructor
		MutantStack	(	const MutantStack& other	);

		// Copy assignment operator overload
		MutantStack& operator = (const MutantStack& other);

		// Destructor
		~MutantStack	(void){};

		struct iterator
		{

		};
	protected:
		/*_*/;

	private:
		/*_*/;
};

#endif

