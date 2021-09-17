#include <iostream>

int main(int argc, char const *argv[])
{
	int sum=0;
	int i=1;
	for (int i = 1; i <=100; ++i)
	{
		if (i%2==0)
		{
			sum+=i;
		}
	}
	std::cout << "La suma es " << sum << "\n";
	return 0;
}