#include <iostream>
#include <cstdlib>

double average(double & x,double y);

int main(int argc, char const *argv[])
{
	double x=std::atof(argv[1]);
	double y=std::atof(argv[2]);
	double z=0;
	std::cout << &x << std::endl;
	z=average(x,y);
	std::cout << z << std::endl;
	std::cout << &x << std::endl;
	std::cout << x << std::endl;
	return 0;
}

double average(double & x,double y){
	double result=0;
	std::cout << &x << std::endl;
	result=0.5*(x+y);
	x=25.123;
	return result;
}