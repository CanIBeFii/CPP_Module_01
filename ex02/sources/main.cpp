#include <iostream>

int main( void ) {
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of str:			" << &str << std::endl;
	std::cout << "Address pointed by stringPTR:	" << stringPTR << std::endl;
	std::cout << "Address pointed by stringREF:	" << &stringREF << std::endl;

	std::cout << "\nValue of str:		" << str << std::endl;
	std::cout << "Value of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Value of stringREF:	" << stringREF << std::endl;

	stringREF += " AND ITS SMALL!";
	std::cout << "\nValue of str: 		" << str << std::endl;
	std::cout << "Value of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Value of stringREF:	" << stringREF << std::endl;

	*stringPTR += " AND ITS SMALL!";
	std::cout << "\nValue of str: 		" << str << std::endl;
	std::cout << "Value of stringPTR:	" << *stringPTR << std::endl;
	std::cout << "Value of stringREF:	" << stringREF << std::endl;
}
