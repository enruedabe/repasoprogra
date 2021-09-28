#include <iostream>




int main(int argc, char const *argv[])
{
	int a=0,b=1,c=2,d=3;
	const int N=10;

	int data[N]{0};

	for (int i = 0; i < N; ++i)
	{
		data[i]=2*i+1;
	}

	double sum=0.0;
	for (int i = 0; i < N; ++i)
	{
		sum+=data[i];
	}

	std::cout << "avg: "<<sum/N <<"\n";

	return 0;
}