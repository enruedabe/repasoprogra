#include <iostream>

int main(int argc, char const *argv[])
{
	int sum = 0;
	int i=0;
	int a=1;
	int b=0;


	while(i<4000000){
		if (i %2 == 0)
		{
			sum+=i;
			
		}
		i=a+b;
		b=a;
		a=i;
	}
	std::cout <<" la suma es " << sum <<"\n";
	return 0;
}