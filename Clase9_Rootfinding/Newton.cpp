#include <iostream>
#include <cmath>

using fptr=double(double);
double f(double x);
double deriv(double x);
double Newton(double x0, double eps, fptr fun,fptr fderiv);



int main(int argc, char const *argv[])
{
	std::cout.precision(15); std::cout.setf(std::ios::scientific);
	double eps = 1.0e-15;
	double x0=10;
	double xroot=Newton(x0,eps,f,deriv);

	std::cout <<xroot <<"\t" << f(xroot)<<"\n";
	return 0;
	return 0;
}


double f(double x){
	const double G=9.81;
	const double m=68.1;
	const double t=10;
	const double vf=40;

	return m*G*(1-std::exp(-x*t/m))/x -vf;
}

double deriv(double x){
	double h=0.0001;
	return (f(x+h/2)-f(x-h/2))/h;
}


double Newton(double x0, double eps, fptr fun, fptr fderiv){
	
	double xr=x0;
	int niter=0;
	int Nitermax=10000;
	while(niter<Nitermax){
		xr = xr-fun(xr)/fderiv(xr);
		if(std::fabs(f(xr))<=eps){break;}
		niter++;
	}
	std::cout << "Newton Info -> Niter:" <<niter<< "\n";
	return xr;
}