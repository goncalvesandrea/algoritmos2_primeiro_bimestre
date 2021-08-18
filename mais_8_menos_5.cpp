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

	if (soma > 20){
		cout << soma + 8 <<"\n";
		}else {
		cout << soma - 5 <<"\n";
		}
	
return 0;

}