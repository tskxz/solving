// Sendo dado o número de eleitores de uma freguesia e o número de votos num partido P, calcule a percentagem

#include <iostream>

int main(){
    
    int num_eleitores;
    int num_votos;

    std::cout << "Introduze os numeros de eleitores: ";
    std::cin >> num_eleitores;


    std::cout << "Introduze o numero de votos: ";
    std::cin >> num_votos;

    double percentagem = num_votos / num_eleitores;
    percentagem = percentagem * 100;

    std::cout << "Percentagem: " << percentagem << std::endl;
}