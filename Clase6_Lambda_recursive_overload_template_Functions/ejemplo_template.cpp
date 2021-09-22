#include <iostream>
#include <cstdlib>

//int getmax(int a,int b);
//double getmax(double a,double b);
template <typename T,typename S>
T getmax(T a, S b)
{
	T result=a;
	if (b>a)
	{
		result=b;
	}
	return result;
}
int main(int argc, char const *argv[])
{
	std::cout <<getmax(2,-1)<<std::endl;
	std::cout <<getmax(2.49,2.51)<<std::endl;
	return 0;
}

