#include "main.hpp"

int main( int argc, char* argv[] )
{
	if ( argc != 4 ) {
		ERROR(USAGE);
		return ( 1 );
	}
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	if ( s1.empty() || s2.empty() || s1.compare(s2) == 0 ) {
		ERROR(STRINGS);
		return ( 2 );
	}
	std::string		filename = argv[1];
	std::ifstream	infile(filename.c_str(), std::ifstream::in);
	if ( infile.is_open() == false) {
		ERROR(INFILE);
		return ( 3 ); 
	}
	std::ofstream	outfile(filename.append(".replace").c_str(), std::ofstream::out);
	if ( outfile.is_open() == false) {
		ERROR(OUTFILE);
		return ( 4 );
	}

	std::string	line;
	while ( getline(infile, line) )
	{
		size_t	pos = 0;
		while (true) {
			size_t	index;
			index = line.find(s1, pos);
			if ( index == std::string::npos ) {
				break ;
			}
			outfile << line.substr(pos, index - pos) << s2;
			pos = index + s1.length();
		}
		outfile << &line[pos] << std::endl;
	}
	infile.close();
	outfile.close();
	return ( 0 );
}