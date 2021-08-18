#include<iostream>

using namespace std;

int main(){
	float temperatura;
	float k;
	float c;
	
	cout << "Qual a temperatura em graus fahrenheit?\n";
	cin >> temperatura;
	
	c = ((temperatura - 32) * 5) / 9; 
	k = c + 273.15;
	
	cout << "A temperatura em graus kelvin e: \n" << k ;
	
	return 0;
}