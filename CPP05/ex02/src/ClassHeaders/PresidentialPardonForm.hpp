#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

// Custom class: PresidentialPardonForm
#include "AForm.hpp"
class	PresidentialPardonForm: public AForm
{
	public:
		// Constructor
		PresidentialPardonForm	(	const std::string & target	);

		// Copy constructor
		PresidentialPardonForm	(	const PresidentialPardonForm& other	);

		// Copy assignment operator overload
		PresidentialPardonForm& operator = (const PresidentialPardonForm& other);

		// Destructor
		~PresidentialPardonForm	(void);

		// Getters and Setter
		const std::string & getTarget	(	void	)const{return _target;};

		void	beExecuted	()const;

	protected:
		/*_*/;

	private:
		const std::string _target;
		/*_*/;
};

#endif

