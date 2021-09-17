#include <iostream>

int main(int argc, char const *argv[])
{
	int sum = 0;
	int i=0;

	while(i<=100){
		if (i %2 == 0)
		{
			sum+=i;
			
		}
		i+=1;
	}
	std::cout <<" la suma es " << sum <<"\n";
	return 0;
}