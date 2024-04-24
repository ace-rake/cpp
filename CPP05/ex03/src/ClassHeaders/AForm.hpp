#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <exception>
#include <string>
// Custom class: AForm
class	AForm
{
	public:
		// Constructor
		AForm	(	std::string name, short gradeSign, short gradeExec	);

		// Copy constructor
		AForm	(	const AForm& other	);

		// Copy assignment operator overload
		AForm& operator = (const AForm& other);

		// Destructor
		~AForm	(void);

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
		class UnsignedForm : public std::exception
		{
			virtual const char * what() const throw();
		};

		virtual void	beSigned	(const Bureaucrat & b);
			void	execute		(const Bureaucrat & b)const;
		virtual void	beExecuted	()const = 0;

	protected:
		/*_*/;

	private:
		/*_*/;
		const std::string	_name;
		bool		_signed;
		const short	_gradeSign;
		const short	_gradeExec;

};
std::ostream&	operator <<	(	std::ostream& os, AForm &other);

#endif

