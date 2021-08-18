#include<iostream>

using namespace std;

int main(){
	int num = 0;
	
	cout << "Digite um numero: \n";
	cin >> num;
	
	if(num % 2 == 0){
		cout << "Esse numero e par!" << "\n";
	}else {
		cout << "Esse numero e impar!" << "\n";
	}
	
	return 0;
	
}