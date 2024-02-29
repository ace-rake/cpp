#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		const std::string &getType();
		void setType(std::string type);

	private:
		std::string type;

};

#endif
