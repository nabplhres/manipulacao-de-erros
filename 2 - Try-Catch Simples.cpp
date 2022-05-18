//Try-Catch Simples.cpp
//Exemplifica o uso dos blocos try e catch

#include<iostream>
using namespace std;

int main() {
    int excecao = 10;

    try{
        cout << "Dentro do bloco de prova try" << endl;
        throw excecao;
        cout << "Isso nao sera exibido";
    }
    catch(int a){
		cout << "Bloco de Captura" << endl << "Valor Capturado = " << a; 
	}
	
	return 0;
}
