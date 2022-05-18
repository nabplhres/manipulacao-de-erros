//divisao_por_zero.cpp
//Exemplo de utilização de uma classe definida pelo usuario,
//derivada de logic_error

#include <iostream>
#include <stdexcept>

using namespace std;

class divisao_por_zero : public logic_error{
	public:
		divisao_por_zero(const string& msg_erro) : logic_error(msg_erro){}
};

float divisao(float, float);

int main(){
	try{
		cout << "3/2 = " << divisao(3, 2) << endl;
		cout << "3/0 = " << divisao(3, 0); 
	}
	catch(logic_error& erro){
		cout << "ERRO: " << erro.what() << endl;
	}
	return 0;
}

float divisao(float num1, float num2){
	if(num2 != 0)
		return num1/num2;
	
	throw divisao_por_zero("Tentativa de divisao por zero");
}