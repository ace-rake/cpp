#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <exception>
#include <string>
// Custom class: Form
class	Form
{
	public:
		// Constructor
		Form	(	void	);
		Form	(	std::string name, short gradeSign, short gradeExec	);

		// Copy constructor
		Form	(	const Form& other	);

		// Copy assignment operator overload
		Form& operator = (const Form& other);

		// Destructor
		~Form	(void);

		// Getters and Setter
		std::string	getName		(	void	) const { return _name;};
		bool		getSigned	(	void	) const	{ return _signed;};
		void		setSigned	(	bool newSigned	)	{_signed = newSigned;};
		short		getGradeSign	(	void	) const { return _gradeSign;};
		short		getGradeExec	(	void	) const { return _gradeExec;};

		// Exceptions
		class GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw();
		};

		void	beSigned(const Bureaucrat & b);

	protected:
		/*_*/;

	private:
		/*_*/;
		const std::string	_name;
		bool		_signed;
		const short	_gradeSign;
		const short	_gradeExec;

};
std::ostream&	operator <<	(	std::ostream& os, Form &other);

#endif

