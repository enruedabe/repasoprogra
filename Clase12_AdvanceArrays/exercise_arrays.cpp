#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>


double statistics(const double data[], const int size);
void fillarray(double data[],int size);




int main(int argc, char const *argv[])
{
	//declaration
	const int N=10000;
	double array[N]{0.0};
	//arrayfilling
	fillarray(array,N);
	

	//PROCESING
	double result=statistics(array,N);

	std::cout<<result<<std::endl;
	return 0;
}
void fillarray(double data[],int size){
	//double x=-9.7865;
	//std::fill(data,data+size,x);
	//std::iota(data,data+size,1);
	//aleatorios
	const int SEED =0;
	std::mt19937 mt(SEED);
	std::uniform_real_distribution<double> dist(0.0,1.0);
	for (int i = 0; i < size; ++i)
	{
		data[i]=dist(mt);
	}
}




double statistics(const double data[], const int size){
	double mean=0.0;
	for (int i = 0; i < size; ++i)
	{
		mean+=data[i];
	}
	return mean/size;
}