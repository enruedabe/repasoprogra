#include <iostream>
#include <array>
#include <vector>




int main(int argc, char const *argv[])
{
	const int N=2048000;

	//int data[N]{0};
	//std::array<int,N> data{0};
	std::vector<int> data(0);
	data.resize(N);

	//std::cout <<data.size()<<"\n";
	//std::cout <<data.max_size()<<"\n";
	//for (int i = 0; i < N; ++i)
	//{
	//	data[i]=2*i+1;
	//}
	int i=0;
	for(auto & val:data){
		val =2*i+1;
		i++;
	}



	double sum=0.0;
	for (int val: data)
	{
		sum+=val;
	}

	std::cout << "avg: "<<sum/N <<"\n";

	return 0;
}