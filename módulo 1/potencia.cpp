// Desenvolva um algoritmo que calcule o valor da potência de um número, dado o valor da base e do expoente.

#include <iostream>
#include <math.h>

int main(){
    
    int expoente;
    int base;

    std::cout << "Introduze a base: ";
    std::cin >> base;

    std::cout << "Introduze o expoente";
    std::cin >> expoente;

    int potencia = pow(base, expoente);
    std::cout << "A potencia: " << potencia << std::endl;

}