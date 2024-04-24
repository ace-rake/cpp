#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

// Custom class: RobotomyRequestForm
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
class	RobotomyRequestForm : public AForm
{
	public:
		// Constructor
		RobotomyRequestForm	(	const std::string & target	);

		// Copy constructor
		RobotomyRequestForm	(	const RobotomyRequestForm& other	);

		// Copy assignment operator overload
		RobotomyRequestForm& operator = (const RobotomyRequestForm& other);

		// Destructor
		~RobotomyRequestForm	(void);

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

