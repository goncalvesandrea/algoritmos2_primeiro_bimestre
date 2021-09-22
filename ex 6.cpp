#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float xA,xB,xC,yA,yB,yC;
	
	//Entrar com os valores do triangulo A
	cout<<"Entre com o lado A do triango x: \n";
	cin>>xA;
	cout<<"Entre com o lado b do triango x: \n";
	cin>>xB;
	cout<<"Entre com o lado c do triango x: \n";
	cin>>xC;
	
	//Entrar com os valores do triangulo B
	cout<<"Entre com o lado A do triango y: \n";
	cin>>yA;
	cout<<"Entre com o lado b do triango y: \n";
	cin>>yB;
	cout<<"Entre com o lado c do triango y: \n";
	cin>>yC;
	
	//calculos realizados 
	float p = (xA + xB + xC) /2;
	float areaX = sqrt (p * (p - xA) * (p - xB)  *(p - xC));
	
	p = (yA + yB + yC) /2;
	float areaY = sqrt (p * (p - yA) * (p- yB) * (p-yC));
	
	
	//mostrar as areas dos triangulos 
	cout<<"A area do Triangulo x e: "<<areaX<<"\n";
	cout<<"A area do Triangulo y e: "<<areaY<<"\n";
	
	//saber qual o triangulo com a maior area	
	if(areaX > areaY){
		cout<<" O triangulo com a maior area e : X";
	}else{
		cout<<" O triangulo com a maior area e : Y";
	}
	
	
}