#include<iostream>


int main(){
	std::string nome;
	int salario;
	
	std:: cout << "Qual o seu nome?\n";
	std:: cin >> nome;
	std:: cout << "Qual sua pretensao salarial?\n";
	std:: cin >> salario;
	
	if(salario < 1300){
		std:: cout << "O cargo que seu compativel com o seu perfil e o de auxiliar de producao";
	}else if (salario <= 2500){
		std:: cout << "O cargo que seu compativel com o seu perfil e o de lideranca";
	}else {
		std:: cout << "Infelizmente seu perfil nao e compativel com nenhuma vaga em aberto, nao desista!";
	}
	
	
	return 0;
}