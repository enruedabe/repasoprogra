#include <iostream>
#include <cstdlib>

int factorial_loop(int m);
int factorial_recu(int m);

int main(int argc, char const *argv[])
{
	int n=std::atoi(argv[1]);
	std::cout <<factorial_loop(n)<< "\n";
	std::cout <<factorial_recu(n)<< "\n";
	return 0;
}

int factorial_loop(int m){
	int mult=1;
	for (int i = 1; i <=m; ++i)
	{
		mult=mult*i;
	}
	return mult;
}
int factorial_recu(int m)
{
	if (m<=1){return 1;}
	return m*factorial_recu(m-1);}