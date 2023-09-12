#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _weapon(NULL), _name( name ) {
	std::cout << "Constructor for HumanB called!" << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << "Deconstructor for HumanB called!" << std::endl;
}

void 	HumanB::attack( void ) {
	if ( _weapon == NULL || _weapon->getType() == "" ) {
		std::cout << _name << " attacks with their bare hands!" << std::endl;
	}
	else {
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon( Weapon &weapon ) {
	_weapon = &weapon;
}

void	HumanB::setName( std::string name ) {
	_name = name;
}

Weapon	HumanB::getWeapon( void ) {
	return ( *_weapon );
}

std::string	HumanB::getName( void ) {
	return ( _name );
}
