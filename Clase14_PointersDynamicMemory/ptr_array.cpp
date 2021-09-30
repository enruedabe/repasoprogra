#include <iostream>

int main(int argc, char const *argv[])
{
	int N=5;
	int data[N]{1};
	int * ptr =nullptr;

	std::cout <<data[0]<<std::endl;
	std::cout <<& data[0]<<std::endl;
	std::cout <<data<<std::endl;
	std::cout <<data+1<<std::endl;
	std::cout <<*(data+1)<<std::endl;
	//std::cout <<data+N<<std::endl;
	//std::cout <<*(data+N)<<std::endl;

	std::cout <<"prt ->"<<ptr<<std::endl;
	ptr= &N;
	std::cout <<"prt ->"<<ptr<<std::endl;
	ptr=data;
	std::cout <<"prt ->"<<ptr<<std::endl;
	std::cout <<"*(prt+1) ->"<<*(ptr+1)<<std::endl;
	return 0;
}