// Desenvolva   um   algoritmo   que   convertaa   temperatura   de   um determinado objecto, dado em grau Celcius (oC), para Fahrenheit (oF)
// F=9/5oC+32
#include <iostream>

int main(){
    double graus;
    
    std::cout << "Escreva a temperatura em celcius: ";
    std::cin >> graus;

    double farh = 9/5 + graus + 32;
}