#include <iostream>

int main(int argc, char const *argv[])
{
	float x=0;
	std::cout << "Escribe el termino que quieres calcular, por favor:\n";
	std::cin>>x;
	float sum = 1.0;
	float i=1;
	while(i<=x){
		sum=sum+1/i;
		i+=1;
	}
	
	std::cout <<" la suma es " << sum-1 <<"\n";
	return 0;
}