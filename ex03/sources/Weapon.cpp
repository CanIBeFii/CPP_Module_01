#include "Weapon.hpp"

Weapon::Weapon( void ) : _type( "" ) {
	std::cout << "Constructor for weapon called!!" <<std::endl;
}

Weapon::Weapon( std::string type ) : _type( type ) {
	std::cout << "Construtor for weapon with the type: " << _type << " called!" <<std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "Deconstructor for Weapon called!" << std::endl;
}

std::string	Weapon::getType( void ) {
	return ( _type );
}

void	Weapon::setType( std::string type ) {
	_type = type;
}