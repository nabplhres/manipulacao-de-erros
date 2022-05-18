//exceção em construtor 2.cpp
//discute uma forma de chamar um destrutor após lançar uma exceção no construtor

#include <iostream>

using namespace std;

class A{
	public:
		void* operator new(size_t Size){
			cout << "Alocando memoria para A." << endl;
			throw 0;
		}	
		void operator delete(void* p){
			::operator delete(p);
			cout << "Memoria desalocada para A." << endl;
		}
		A(){cout << "Construtor de A." << endl; throw 1;}
		~A(){cout << "Destrutor de A." << endl;}		
};

class B{
	A *a; 
	int b;
	public:
		B();
		~B();
};

int main(){
	try{
		B b;
	}catch(...){cout << "Excecao capturada na main()." << endl;}
	return 0;
}

B::B() try : b(10){
	cout << "Construtor de B. Alocando memoria para A." << endl;
	a = new A; 
}
catch(...){
	cout << "Excecao capturada em B. Liberando memoria para A." << endl;
	delete a;
	throw; 
}

B::~B(){
	cout << "Destrutor de B. Liberando memoria alocada para A." << endl;
	delete a;	
}