#include<iostream>

using namespace std;

int main(){
	int num = 0;
	
	cout << "Digite um numero positivo ou negativo:\n";
	cin >> num;
	
	if(num >=0){
		cout << num;
	}else{
		cout << num * -1;
	}
}