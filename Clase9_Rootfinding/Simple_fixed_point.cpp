#include <iostream>
#include <cmath>

using fptr=double(double);
double f(double x);
double g(double x);
double fixedpoint(double x0, double eps, fptr gfun,fptr fun);



int main(int argc, char const *argv[])
{
	std::cout.precision(15); std::cout.setf(std::ios::scientific);
	double eps = 1.0e-15;
	double x0=10;
	double xroot=fixedpoint(x0,eps,g,f);

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

double g(double x){
	return f(x)+x;
}


double fixedpoint(double x0, double eps, fptr gfun, fptr fun){
	
	double xr=x0;
	int niter=0;
	int Nitermax=10000;
	while(niter<Nitermax){
		xr = gfun(xr);
		if(std::fabs(f(xr))<=eps){break;}
		niter++;
	}
	std::cout << "fixedpoint Info -> Niter:" <<niter<< "\n";
	return xr;
}