#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name );
		~HumanB( void );

		void	attack( void );
		void	setWeapon( Weapon &weapon );
		void	setName( std::string name );

		Weapon		getWeapon( void );
		std::string getName( void );

	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif