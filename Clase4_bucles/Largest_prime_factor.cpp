#include <iostream>

int main(int argc, char const *argv[])
{
	long int num=600851475143;
	int largest=0;
	int i=0;
	for (long int i = 2; i <= num; i++)
	{
		if (num%i==0)
		{
			num=num/i;
			largest=i;

		}
	}
	if (num>largest)
	{
		largest=num;
	}
	std::cout<<largest;
	return 0;
}