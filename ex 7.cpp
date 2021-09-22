#include <iostream>


int main (){
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	std:: cout << "Digite o primeiro numero: \n";
	std:: cin >> num1;
	std:: cout << "Digite um primeiro numero que voce acredita que seja divisivel por " << num1 << "\n";
	std:: cin >> num2;
	std:: cout << "Digite um numero que voce acredita que seja divisivel por " << num1 << "\n";
	std:: cin >> num3;
	
	if (num2 % num1 == 0 && num3 % num1 == 0 ){
		std:: cout << "Parabens os dois numeros sao divisiveis por " << num1;
	}else{
		std:: cout << "Voce errou. Precisa estudar mais matematica";	
	}
	
	
	return 0;
	
}