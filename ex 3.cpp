#include<iostream>


int main(){
	
	int op = 0;
	int num1 = 0;
	int num2 = 0;
	int r = 0;

	
	std:: cout << "Digite o primeiro numero:\n";
	std:: cin >> num1;
	std:: cout << "Digite o segundo numero:\n";
	std:: cin >> num2;
	std:: cout << "Para somar digite 1, para subtrair digite 2, para multiplicar digite 3 e para dividir digite 4 \n";
	std:: cin >> op;
	
	if(op == 1){
		r = num1 + num2;
	}else if(op == 2){
		r = num1 - num2;
	}else if(op == 3){
		r = num1 * num2;
	}else{
		r = num1 / num2;
	}
	
	if(r > 0){
		std:: cout << "O resultado e: " << r;
	}else{
		std:: cout << "O resultado e: " << r * -1;
	}
	
	
	return 0;
	
}