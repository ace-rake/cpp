#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

// Custom class: ShrubberyCreationForm
#include "AForm.hpp"
#include "Bureaucrat.hpp"
class	ShrubberyCreationForm : public AForm
{
	public:
		// Constructor
		ShrubberyCreationForm	(	const std::string & target	);

		// Copy constructor
		ShrubberyCreationForm	(	const ShrubberyCreationForm& other	);

		// Copy assignment operator overload
		ShrubberyCreationForm& operator = (const ShrubberyCreationForm& other);

		// Destructor
		~ShrubberyCreationForm	(void);

		// Getters and Setter
		const std::string & getTarget	(	void	)const{return _target;};
		
		void	beExecuted	()const;

	protected:
		/*_*/;

	private:
		const std::string & _target;
		/*_*/;
};

#endif

