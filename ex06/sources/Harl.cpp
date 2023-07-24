#include "Harl.hpp"

Harl::Harl( void ) {
	// std::cout << "Constructor for Harl called!" << std::endl;
}

Harl::~Harl( void ) {
	// std::cout << "Deconstructor for Harl called!" << std::endl;
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!\n" << std::endl;
	info();
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! " << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
	warning();
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]" <<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
	error();
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::invalidComplain( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string level_names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			level_num;

	for ( level_num = 0;
		level_num < 4 && level_names[level_num].compare(level) != 0;
		level_num++ ) {}

	switch ( level_num ) {
		case 0:
			debug();
			break ;
		case 1:
			info();
			break ;
		case 2:
			warning();
			break ;
		case 3:
			error();
			break ;
		case 4:
			invalidComplain();
			break ;
	}
}
