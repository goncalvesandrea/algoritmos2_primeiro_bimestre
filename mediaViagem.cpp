#include<iostream>

using namespace std;

int main(){
	float tempo;
	float velocidade;
	float distancia;
	float litros_usados;
	
	cout << "Quantas horas durou a viagem?\n";
	cin >> tempo;
	cout << "Qual a velocidade media durante a viagem?\n";
	cin >> velocidade;	
	
	distancia = tempo * velocidade;
	litros_usados = distancia / 12;
	
	cout << "Velocidade media da viagem: " << velocidade << " km/h\n";
	cout << "Tempo medio da viagem: " << tempo << " horas\n";
	cout << "Distancia percorrida na viagem: " << distancia << " km/h\n";
	cout << "A quantidade de combustivel usada na viagem foi: " << litros_usados << " litros";
	
	return 0;
}