#include "Harl.hpp"

int	main( void ) {
	Harl karen;

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("Not a level");
	return ( 0 );
}