#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name( name ), _weapon( weapon ){
	std::cout << "Constructor for HumanA called!" << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "Deconstructor for HumanA called!" << std::endl;
}

void 	HumanA::attack( void ) {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

void	HumanA::setWeapon( Weapon &weapon ) {
	_weapon = weapon;
}

void	HumanA::setName( std::string name ) {
	_name = name;
}

Weapon	HumanA::getWeapon( void ) {
	return ( _weapon );
}

std::string	HumanA::getName( void ) {
	return ( _name );
}