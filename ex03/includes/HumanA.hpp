#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void	attack( void );
		void	setWeapon( Weapon &weapon );
		void	setName( std::string name );

		Weapon		getWeapon( void );
		std::string getName( void );

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif