
// Escreva um  algoritmo  capaz  de  calcular  e  apresentar  o  volume  de um tanque paralelepipédico, a partir dos valores necessários para esse efeito (comprimento, largura e altura)


#include <iostream>

using namespace std;

int main(){
    
    double comprimento;
    double largura;
    double altura;

    cout << "Escreva o valor do comprimento";
    cin >> comprimento;
    
    cout << "Escreva o valor da largura: ";
    cin >> largura;

    cout << "Escreva o valor da altura: ";
    cin >> altura;

    double volume = comprimento * largura * altura;
    std::cout << "Volume da piramida: " << volume << std::endl;

}