//exemplo out_of_range.cpp
//tratamento de uma exceção do tipo out_of_range

#include <iostream>
#include <stdexcept>

using namespace std;

class Array{
	int *num;
	unsigned int size_array;
	public:
		Array(size_t Size, int valor = 0){	
			size_array = Size;
			num = new int[size_array];	
			for(unsigned int i=0; i<Size; ++i)
				num[i] = valor;			
		}
		~Array(){						
			delete[] num;
		}
		int operator[](unsigned int posicao){
			if(posicao >= 0 && posicao < size_array)
				return num[posicao];
			
			throw out_of_range("Posicao invalida");
		}
};

int main(){
	Array array(3, 1); 
	
	try{
		cout << "array[0] = " << array[0] << endl;
		cout << "array[1] = " << array[1] << endl;
		cout << "array[2] = " << array[2] << endl;
		cout << "array[3] = " << array[3] << endl;	
	}
	catch(out_of_range& erro){
		cout << "ERRO: " << erro.what() << endl;
	}
	
	return 0;
}