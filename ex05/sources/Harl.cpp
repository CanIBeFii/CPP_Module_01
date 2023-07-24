#include "Harl.hpp"

Harl::Harl( void ) {
	std::cout << "Constructor for Harl called!" << std::endl;
}

Harl::~Harl( void ) {
	std::cout << "Deconstructor for Harl called!" << std::endl;
}

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::invalidComplain( void ) {
	std::cout << "There's not a level with this name!" << std::endl;
}

void	Harl::complain( std::string level ) {
	t_func		levels[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::invalidComplain};
	std::string level_names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			level_num;

	for ( level_num = 0;
		level_num < 4 && level_names[level_num].compare(level) != 0;
		level_num++ ) {}

	(this->*levels[level_num])();
}
