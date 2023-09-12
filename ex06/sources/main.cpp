#include "Harl.hpp"

int	main( int argc, char **argv ) {

	if ( argc != 2 ) {
		std::cout << "Usage: ./harlFilter *levelname* " << std::endl;
		return ( 1 );
	}
	Harl karen;
	std::string str( argv[1] );

	karen.complain( str );
	return ( 0 );
}
