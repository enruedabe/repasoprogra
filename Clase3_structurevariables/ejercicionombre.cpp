#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	std::string fullname;
	std::cout << "Escribe tu nombre, por favor:\n";
	std::getline(std::cin,fullname);
	std::cout << "Hola," <<fullname << std::endl;

	return 0;
}