#include<iostream>

using namespace std;

int main(){	
	float temperatura;
	float c;
	
	cout << "Qual a temperatura em graus fahrenheit?\n";
	cin >> temperatura;
	
	c = ((temperatura - 32) * 5) / 9;
	
	cout << "A temperatura em graus celsius e: \n" << c;
	
	return 0;
}