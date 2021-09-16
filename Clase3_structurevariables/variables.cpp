#include <iostream>

int main(int argc, char const *argv[])
{
	//tipos primitivos
	double x=-9.6e3; //64bits,8bytes, 1.0e^-16, 2^1024
	long double y= -9.6e3; //>64bits
	float z = 10.54e-8 ;// 32bits,1.0r-6, 10^40
	int a=5678; //
	long int b=-123546548;//
	short int c=678;
	char l ='a';
	bool flag = true;
	
	//comandos
	std::cout << sizeof(short int) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(long int) << std::endl;
	std::cout << sizeof(float) << std::endl;
	std::cout << sizeof(double) << std::endl;
	std::cout << sizeof(long double) << std::endl;

	return 0;
}