#include <cmath>
#include <iostream>
int isprime(int n);



int main(int argc, char const *argv[])
{
	int m=1;
	std::cout << "Por favor escriba un numero entero:\n";
	std::cin>>m;
	std::cout << isprime(m)<<"\n";
	return 0;
}
int isprime(int n)
{for (int i = 2; i <=std::sqrt(n); ++i)
	{
		if (n%i==0)
		{
		return 0;
		}
	}
	return 1;
}