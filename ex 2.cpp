#include<iostream>


int main(){
	
	int n = 7;
	int numero;
	
	std:: cout << "Advinhe o meu numero de 1 a 10:\n";
	std:: cin >> numero;
	
	if(numero == n){
		std:: cout << "Parabens voce acertou!";
	}else{
		std:: cout << "Voce errou.";
	}
	

	return 0;
}