#include<iostream>

using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	int soma = 0;

	cout << "Digite o primeiro numero: \n";
	cin >> num1;
	cout << "Digite o segundo numero: \n";
	cin >> num2;

	soma = num1 + num2;

	if (soma > 10){
		cout << "A soma dos numeros digitados e: " << soma <<"\n";
		}

	return 0;
}