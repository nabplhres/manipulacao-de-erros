//cin sem exceções.cpp
//mostra o uso comum do cin, sem o tratamento de erros

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
	cout << "Entre com os dados do cliente" << endl << "Nome: ";
	cin >> nome;
	cout << "Idade: ";
	cin >> idade;
	cout << "Sexo (M - masculino / F - feminino): ";
	cin >> sexo;
}