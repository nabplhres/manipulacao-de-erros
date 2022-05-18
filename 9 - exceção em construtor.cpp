//excecao em construtor.cpp

#include <iostream>

using namespace std;

class A{
	int a;
	public:
		A(){
			cout << "Construtor de A" << endl;
			throw 1; 
		}
		
		~A(){
			cout << "Destrutor de A" << endl;
		}		
};

int main(){
	try{
		A a;
	}catch(int){
		cout << "Excecao capturada na main()" << endl;
	}
	return 0;
}
