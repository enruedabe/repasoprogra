#include <iostream>
#include <cmath>
#include <functional>

using fptr =double(double);
using fptr2 = double(fptr ,double ,double ,int );

double f(double x);
double simpson(fptr fun,double a,double b,int N);
double richardson(fptr2 alg,fptr fun,double a,double b,int N,int alpha);



int main(int argc, char const *argv[])
{
	std::cout.precision(15);std::cout.setf(std::ios::scientific);
	double xmin=0.0;
	double xmax=1.0;

	for (int Nmax = 1; Nmax <= 1000000; Nmax*=10)
	{
		double intnum_simpson=simpson(f,xmin,xmax,Nmax);
		double intnum_trapsimp=richardson(simpson,f,xmin,xmax,Nmax,4);
		double inttheo=-std::cos(xmax)+std::cos(xmin);
		double delta_trapsimp=std::fabs(1- intnum_trapsimp/inttheo);
		double delta_simpson=std::fabs(1- intnum_simpson/inttheo);
		std::cout <<Nmax
				  << "\t"<<delta_simpson
				  << "\t"<<delta_trapsimp
				  <<"\n";
	}
	

	return 0;
}

double f(double x){
	return std::sin(x);
}

double simpson(fptr fun,double a,double b,int N){
	const double h=(b-a)/N;
	double suma=fun(a)+fun(b);
	double aux1=0, aux2=0;
	for (int i = 1; i <= N/2 -1; ++i)
	{
		double x= a+2*i*h;
		aux1+= fun(x);
	}
	for (int i = 1; i <= N/2; ++i)
	{
		double x= a+(2*i-1)*h;
		aux2+= fun(x);
	}
	suma=h*(fun(a)+fun(b)+2*aux1+4*aux2)/3;
	return suma;
}

double richardson(fptr2 alg,fptr fun,double a,double b,int N,int alpha){
	double aux1=alg(fun,a,b,2*N);
	double aux2=alg(fun,a,b,N);
	return aux1+(aux1-aux2)/(std::pow(2,alpha)-1);
}