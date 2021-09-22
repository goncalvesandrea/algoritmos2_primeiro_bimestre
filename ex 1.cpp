#include <iostream>
#include <cmath>

int main()
{
    float a, b, c, delta, root1, root2;

    std::cout << "Coeficiente a: ";
    std::cin >> a;

    std::cout << "Coeficiente b: ";
    std::cin >> b;

    std::cout << "Coeficiente c: ";
    std::cin >> c;

    if(a != 0){
        delta = (b*b) - (4*a*c);

        if(delta<0){
            std::cout <<"Nao tem raizes reais\n";
        }
        else if (delta==0){
            root1=(-b)/(2*a);
            std::cout << "Possui apenas uma raiz real: "<<root1<< "\n";
        }else{
            root1=(-b - sqrt(delta))/(2*a);
            root2=(-b + sqrt(delta))/(2*a);
            std::cout << "Raiz 1: "<<root1 << "\n";
            std::cout << "Raiz 2: "<<root2<< "\n";
        }
    }else{
        std::cout <<"a=0, nao e uma equacao do segundo grau\n";
    }

}