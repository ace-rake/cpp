#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		int			number;
		std::string secret;
		std::string trunc(std::string);
		std::string	get_field(std::string, int force_number);
		
	public:
		Contact();
		std::string get_first_name();
		void print_info_small();
		void print_info();
		void get_info();
};
#endif
