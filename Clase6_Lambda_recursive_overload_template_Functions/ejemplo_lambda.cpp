#include <iostream>
#include <vector>//arreglos
#include <algorithm>

int main(int argc, char const *argv[])
{
	int c=90;
	for (int i = 0; i < 3; ++i)
	{
		auto flambda= [&c,&i](auto a,auto b){
		std::cout << c <<"\n";
		c = 100*i;
		return a<b;
		};
	
	
		bool flag = flambda(2,2.89);
		std::cout << flag <<"\n";
		std::cout << flambda(3.89,2)<<"\n";
	}
	return 0;
}