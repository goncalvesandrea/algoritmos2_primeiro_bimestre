#include<iostream>


int main(){
	
	int op = 0;
	float minCalorias = 0;
	float maxCalorias = 0;
	float peso = 0;
	
	std::cout << "Qual seu peso em quilogramas?\n";
	std::cin >> peso;
	std::cout << "Se quiser emagrecer digite 1, se quiser manter o peso digite 2 mas se quiser ganhar peso digite 3\n";
	std::cin >> op;
	
	if(op == 1){
		minCalorias = 20 * peso;
		maxCalorias = 25 * peso;
		std::cout << "Para emagrecer com saude consuma um minimo de " << minCalorias << " calorias e um maximo de " << maxCalorias << " calorias. \n";
	}else if (op == 2){
		minCalorias = 25 * peso;
		maxCalorias = 30 * peso;
		std::cout << "Para manter o peso com saude consuma um minimo de " << minCalorias << " calorias e um maximo de " << maxCalorias << " calorias. \n";
	}else{
		minCalorias = 30 * peso;
		maxCalorias = 35 * peso;
		std::cout << "Para ganhar peso com saude consuma um minimo de " << minCalorias << " calorias e um maximo de " << maxCalorias << " calorias. \n";
	}
	
	
	return 0;
}