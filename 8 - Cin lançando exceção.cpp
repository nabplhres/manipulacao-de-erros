//cin lançando exceção.cpp
//Mostra como é possível capturar exceções no objeto cin

#include <iostream>

using namespace std;

class Cliente{
	string nome;
	int idade;
	char sexo;
	public:
		void ler();
		void exibir();
};

int main(){
	Cliente c;
	cin.exceptions(ios::failbit); 
	
	c.ler();
	c.exibir();
	
	return 0;
}

void Cliente::exibir(){
	cout << endl << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
	cout << "Sexo: " << sexo << endl;
}

void Cliente::ler(){
	try{
		cout << "Entre com os dados do cliente" << endl << "Nome: ";
		cin >> nome;
		cout << "Idade: ";
		cin >> idade;
		cout << "Sexo (M - masculino / F - feminino): ";
		cin >> sexo;
	}catch(ios::failure){ 
		cerr << endl << "Dados invalidos, tente novamente." << endl << endl;
		cin.clear(); 
		cin.ignore(10000, '\n');
		ler(); 
	}
}