#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

// Custom class: Bureaucrat
#include <exception>
#include <string>
class AForm;
class	Bureaucrat
{
	public:
		// Constructor
		Bureaucrat	(	std::string name, short grade);

		// Copy constructor
		Bureaucrat	(	const Bureaucrat& other	);

		// Copy assignment operator overload
		Bureaucrat& operator = (const Bureaucrat& other);

		// Destructor
		~Bureaucrat	(void);

		// Getters and Setter
		short		getGrade(	void			)const;
		void		setGrade(	short new_grad		);
		std::string	getName(	void			)const;
		void		setName(	std::string new_name	);
		
		class	GradeTooHighException : public std::exception
		{
			public:
				const char * what()const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char * what()const throw();
		};

		void	incrementGrade(	void	);
		void	decrementGrade(	void	);

		void	signForm(AForm & f)const;
		void	executeForm(AForm & f)const;

	protected:
		/*_*/;

	private:
		/*_*/;
		std::string _name;
		short _grade;
};
std::ostream&	operator <<	(	std::ostream& os, Bureaucrat &other);

#endif

