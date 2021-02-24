// Desenvolva um algoritmo que leia três lados de um triângulo a,b e c e calcule a área do triângulo pela fórmula de Herão:
// Area2 =p(p-a)(p-b)(p-c) onde p=(a+b+c)/2

#include <iostream>

int main(){
    
    double a;
    double b;
    double c;

    std::cout << "Digite o valor do a: ";
    std::cin >> a;

    std::cout << "Digite o valor do b: ";
    std::cin >> b;

    std::cout << "Digite o valor do c: ";
    std::cin >> c;

    double perimetro = a + b + c;
    double area = perimetro * (perimetro - a) * (perimetro - b) * (perimetro * c);
    area = area / 2;

    std::cout << "Area: " << area << std::endl;

}