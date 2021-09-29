#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <random>


double statistics(const std::vector<double> & data);
void fillarray( std::vector<double> & data);




int main(int argc, char const *argv[])
{
	//declaration
	const int N=1000;
	

	std::vector<double> array;
	array.resize(N);
	

	//arrayfilling
	fillarray(array);
	

	//PROCESING
	double result=statistics(array);

	std::cout<<result<<std::endl;
	return 0;
}
void fillarray(std::vector<double> & data){
	//double x=-9.7865;
	//std::fill(data,data+size,x);
	//std::iota(data,data+size,1);
	//aleatorios
	const int SEED =0;
	std::mt19937 mt(SEED);
	std::uniform_real_distribution<double> dist(0.0,1.0);
	for(auto & val:data){
		val=dist(mt);
	}
}




double statistics(const std::vector<double> & data){
	double suma=0.0;
	for(auto & val:data){
		suma+=val;
	}
	return suma/data.size();
}