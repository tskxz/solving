// Desenvolva um algoritmo que calcule o volume de uma esfera

// Volme = 4/3PIr^3


#include <iostream>

int main(){
    
    double raio;
    double PI = 3.14;

    std::cout << "Digite o raio: ";
    std::cin >> raio;
    
    double volume = (4 * PI * raio * raio * raio);
    volume = volume / 3;

    std::cout << "Volume da esfera: " << volume << std::endl;

}