#include <iostream>
#include <cmath>

using fptr=double(double);
double f(double x);
double bisection(double xl, double xu, double eps, fptr fun);




int main(int argc, char const *argv[])
{
	std::cout.precision(15); std::cout.setf(std::ios::scientific);
	double xl =1.0;
	double xu =20.0;
	double eps = 1.0e-15;

	double xroot=bisection(xl,xu,eps,f);

	std::cout <<xroot <<"\t" << f(xroot)<<"\n";
	return 0;
}

double f(double x){
	const double G=9.81;
	const double m=68.1;
	const double t=10;
	const double vf=40;

	return m*G*(1-std::exp(-x*t/m))/x -vf;
}
double bisection(double xl, double xu, double eps, fptr fun){
	
	double xr=0;
	int niter=0;
	int Nitermax=1000;
	while(niter<Nitermax){

	xr = 0.5*(xl+xu);
	if(std::fabs(fun(xr))<=eps){break;}
	else if (fun(xr)*fun(xu)>0){xu=xr;}
	else {xl=xr;}
	niter++;
	}
	std::cout << "Bisection Info -> Niter:" <<niter<< "\n";
	return xr;
}