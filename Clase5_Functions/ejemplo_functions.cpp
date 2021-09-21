#include <iostream>

void print_message(int a);

int main(int argc, char const *argv[])
{
	int a=12;
	std::cout <<"Direccion de a en main: "<< &a <<std::endl;
	print_message(a);
	return 0;
}

void print_message(int a){
	std::cout <<"this is a message"<<std::endl;
	std::cout <<"Parametro a:"<< a <<std::endl;
	std::cout <<"Direccion de a en print: "<< &a <<std::endl;
}