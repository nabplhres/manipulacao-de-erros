//set_terminate.cpp
//exemplifica o uso da função set_terminate

#include<iostream>
#include<cstdlib>
using namespace std;

void novaTerminate()
{
	cout << endl << "EXCECAO NAO CAPTURADA" << endl;
	exit(1);
}
int main()
{
	int excecao;
	string Exc = "Excecao";
	set_terminate(novaTerminate); 
	
	try{
		throw excecao;
	}
	catch(string a){
	    cout << "Excecao do tipo string capturada: " << a;
	}
	return 0;
}
