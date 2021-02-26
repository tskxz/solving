// Construa  um  algoritmo  que  converta  um  determinado  valor  em  Euros para Escudos. Nota: 1 Euro = 200.482 Escudos

#include <iostream>

int main(){

    double euros;
    double escudos = 200.482;

    std::cout << "Introduze o numero de euros: ";
    std::cin >> euros;

    double euros_escudos = euros * escudos;
    std::cout << euros << " euros para " <<  escudos << " escudos" << std::endl;


}
