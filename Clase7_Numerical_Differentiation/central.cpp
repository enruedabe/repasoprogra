#include <iostream>
#include <cmath>

/*calcular la derivada fow del sin
graf x\in [0,2pi] y comparar*/

double f(double x);
double deriv_central(double x,double h);
int main(int argc, char const *argv[])
{
	const double DX=0.1;
	const double Xmin=0.0;
	const double Xmax=2*M_PI;
	
	const int N = (Xmax-Xmin)/DX;
	for (int i = 0; i < N; ++i)
	{
		double x = Xmin +i*DX;
		double error_central = std::fabs(1-deriv_central(x,DX)/std::cos(x));
		std::cout <<x <<"\t"<< f(x)
		<<"\t" <<deriv_central(x,DX)
		<<"\t" <<error_central
		<<"\n";
	}
	return 0;
}

double f(double x)
{
	return std::sin(x);
}

double deriv_central(double x,double h){
	return ((f(x+h/2)-f(x-h/2))/h);
}