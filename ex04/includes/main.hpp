#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <fstream>

# define ERROR(x) std::cout << x << std::endl

# define USAGE "Usage: ./replace [filename] [string to replace] [string to replace with]"
# define STRINGS "Error(2): Strings cannot be empty or equal."
# define INFILE "Error(3): Could not open file to replace."
# define OUTFILE "Error(4): Could not open the output file."

#endif