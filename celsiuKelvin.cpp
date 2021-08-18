#include<iostream>

using namespace std;

int main(){
	float temperatura;
	float k;
	
	cout << "Qual a temperatura em graus celsius?\n";
	cin >> temperatura;
	
	k = temperatura + 273.15;
	cout << "A temperatura em graus kelvin e: \n" << k;
	
	return 0;
}