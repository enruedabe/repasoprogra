#include <iostream>
#include <vector>

typedef std::vector<double> DataT;



void fill(DataT & data,const int sizex, const int sizey);
void print(const DataT & data,const int sizex, const int sizey);
void transpose(DataT & data,DataT & dataT,const int sizex, const int sizey);
double trace (const DataT &data,int sizex,int sizey);

int main(int argc, char const *argv[])
{	
	const int M=5;
	const int N=5;
	//declarar matriz y variable

	DataT matrix(M*N,0.0);

	//llenar
	fill(matrix,M,N);
	
	//transponer
	
	DataT matrixT(N*M, 0.0);
	transpose(matrix,matrixT,M,N);


	//imprimir


	std::cout << trace(matrix, M, N) << "\n";
    std::cout << trace(matrixT, N, M) << "\n";


	return 0;
}

void fill(DataT & data,const int sizex, const int sizey){
	for (int ix = 0; ix < sizex; ++ix)
	{
		for (int iy = 0; iy < sizey; ++iy)
		{
			data[ix*sizey+iy]=ix*sizey + iy;
		}
	}
}
void print(const DataT & data,const int sizex, const int sizey){
	for (int ix = 0; ix < sizex; ++ix)
	{
		for (int iy = 0; iy < sizey; ++iy)
		{
			std::cout << data[ix*sizey+iy]<<"  ";
		}
		std::cout<<"\n";
	}
}


void transpose(DataT & data,DataT & dataT,const int sizex, const int sizey){
	for (int ix = 0; ix < sizex; ++ix)
	{
		for (int iy = 0; iy < sizey; ++iy)
		{
			dataT[iy*sizex+ix]=data[ix*sizey+iy];
		}
		
	}
}

double trace (const DataT &data,int sizex,int sizey){
	double sum=0.0;
	for (int ix = 0; ix < sizex; ++ix)
	{
		sum += data[ix*sizey + ix];
	}
	return sum;
}