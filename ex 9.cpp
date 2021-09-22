#include<iostream>


int main(){
	float salario;
	
	
	std:: cout << "Qual o seu salario?\n";
	std:: cin >> salario;
	
	if(salario <= 1900){
		std:: cout << "Nao ha imposto a ser pago.";
	}else if(salario <= 2499){
		std:: cout << "O imposto a ser pago e de: " << salario * 0.02;
	}else if(salario <= 3699){
		std:: cout << "O imposto a ser pago e de: " << salario * 0.03;
	}else if(salario <= 4999){
		std:: cout << "O imposto a ser pago e de: " << salario * 0.045;
	}else {
		std:: cout << "O imposto a ser pago e de: " << salario * 0.06;
	}
	
	return 0;
}