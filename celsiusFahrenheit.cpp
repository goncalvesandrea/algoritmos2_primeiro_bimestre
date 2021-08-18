#include<iostream>

using namespace std;

int main(){
	float temperatura;
	float f;
	
	cout << "Qual a temperatura em graus celsius?\n";
	cin >> temperatura;
	
	f = ( 9 * temperatura + 160 ) / 5;
	
	cout << "A temperatura em graus fahrenheit e: \n" << f;
	
	return 0;
}