#include<iostream>


int main(){
	float m;
	float po;
	float pe;
	float ja;
	float mi;
	float cm;
	float km;
	
	std:: cout << "Qual a distancia em metros?\n";
	std:: cin >> m;
	
	po = m * 39.37;
	std:: cout << "A distancia em polegadas e: \n" << po << "\n";
	
	pe = m * 3.281;
	std:: cout << "A distancia em pes e: \n" << pe << "\n";
	
	ja = m * 1.094;
	std:: cout << "A distancia em jardas e: \n" << ja << "\n";
	
	mi = m / 1609;
	std:: cout << "A distancia em milhas e: \n" << mi << "\n";
	
	cm = m * 100;
	std:: cout << "A distancia em centrimetros e: \n" << cm << "\n";
	
	km = m / 1000;
	std:: cout << "A distancia em quilometros e: \n" << km << "\n";
	
	return 0;
}