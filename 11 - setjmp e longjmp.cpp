//setjmp e longjmp.cpp
//FONTE: GOYAL(2013)

#include <iostream>
#include <csetjmp>

using namespace std;

class Rainbow{
	public:
		Rainbow() {cout << "Rainbow()" << endl;}
		~Rainbow() {cout << "~Rainbow()" << endl;}
};

jmp_buf kansas;

void oz(){
	Rainbow rb;
	for(int i=0; i<3; i++){
		cout << "there's no place like home" << endl;
	}
	longjmp(kansas,47);
}

int main(){
	if(setjmp(kansas) == 0){
		cout << "tornado, witch, muchkins..." << endl;
		oz();
	}
	else{
		cout << "Auntie Em! "
		     << "I had the strangest dream..." << endl;
	}
	return 0;
}