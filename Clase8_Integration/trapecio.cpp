#include <iostream>
#include <cmath>
#include <functional>

using fptr =double(double);

double f(double x);
double trapecio(fptr fun,double a,double b,int N);



int main(int argc, char const *argv[])
{
	std::cout.precision(15);std::cout.setf(std::ios::scientific);
	double xmin=0.0;
	double xmax=1.0;

	for (int Nmax = 1; Nmax <= 10000000; Nmax*=10)
	{
		double intnum_trapecio=trapecio(f,xmin,xmax,Nmax);
		double inttheo=-std::cos(xmax)+std::cos(xmin);
		double delta_trapecio=std::fabs(1- intnum_trapecio/inttheo);
		std::cout <<Nmax
				  << "\t"<<delta_trapecio
				  <<"\n";
	}
	

	return 0;
}

double f(double x){
	return std::sin(x);
}

double trapecio(fptr fun,double a,double b,int N){
	const double h=(b-a)/N;
	double suma=0.5*(fun(a)+fun(b));
	for (int i = 0; i <= N-1; ++i)
	{
		double xi =a + i*h;
		suma+=fun(xi);
	}
	suma *=h;
	return suma;
}