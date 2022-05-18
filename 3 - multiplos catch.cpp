//multiplos catch.cpp
//Exemplifica a captura de diversos tipos de exceção

#include<iostream>
using namespace std;

template <typename T>
void trataExcecao(T exc){
	try{
		throw exc;
	}
	catch(int){
		cout << "Variavel int Capturada" << endl;
	}
	catch(float){
		cout << "Variavel float Capturada" << endl;
	}
	catch(char){
		cout << "Variavel char Capturada" << endl;
	}
	catch(...){
		cout << "Catch mais generico utilizado" << endl;
	}
}


int main(){
	trataExcecao<int>(2);
	trataExcecao<string>("EXCECAO");
	trataExcecao<char>('E');
	trataExcecao<float>(5.6);	
	
	return 0;
}