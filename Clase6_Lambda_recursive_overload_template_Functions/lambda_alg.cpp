#include <iostream>
#include <vector>//arreglos
#include <algorithm>
#include <cmath>

int main(int argc, char const *argv[])
{
	std::vector<int> data={3,4,-1,-10,0};

	auto comp = [](int a, int b){return std::abs(a)>std::abs(b);};

	std::sort(data.begin(), data.end(), comp);
	
	for (int i = 0; i < 5; ++i)
	{
		std::cout <<"data["<<i<<"]:"<<data[i]<<"\n";
	}

	return 0;
}