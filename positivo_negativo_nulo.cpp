#include<iostream>

using namespace std;

int main(){
	int num = 0;
	
	cout << "Digite um numero positivo, negativo ou nulo: \n";
	cin >> num;
	
	if(num > 0){
		cout << "Esse numero e positivo!" << "\n";
	}else if (num< 0) {
		cout << "Esse numero e negativo!" << "\n";
	}else {
		cout << "Esse numero e nulo!" << "\n";
	}
	
	return 0;
	
}