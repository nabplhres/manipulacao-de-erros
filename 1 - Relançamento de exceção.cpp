//Relançamento de exceção.cpp
//Fonte: adaptado de JAMSA(1998)

#include <iostream>
using namespace std;

void TrataExcecao(){
	try{
		throw 14;
	}
	catch(int){
		cout << "Capturei int dentro de TrataExcecao." << endl;
		throw;
	}
}

int main(){
	cout << "Inicio: " << endl;
	try{
		TrataExcecao();
	}
	catch(int){
		cout << "Capturei int dentro de main()." << endl;
	}
	cout << "Fim";
	
	return 0;
}