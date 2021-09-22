#include <iostream>
#include <cstdlib>

int getmax(int a,int b);
double getmax(double a,double b);

int main(int argc, char const *argv[])
{
	std::cout <<getmax(2,-1)<<std::endl;
	std::cout <<getmax(2.49,2.51)<<std::endl;
	return 0;
}

int getmax(int a, int b)
{
	int result=a;
	if (b>a)
	{
		result=b;
	}
	return result;
}

double getmax(double a, double b)
{
	double result=a;
	if (b>a)
	{
		result=b;
	}
	return result;
}