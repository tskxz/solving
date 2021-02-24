// Escreva um algoritmo capaz de calcular e apresentar o valor da área de um trapézio a partir dos valores necessários para esse efeito, que devem ser pedidos ao utilizador. 
// Nota: A área de um trapézio é obtida multiplicando  a  medida  da  sua  altura  pela  metade  da  soma  da  base maior com a base menor.

#include <iostream>

using namespace std;

int main(){

    double altura;
    double base_maior;
    double base_menor;

    cout << "Digite o tamanho da base maior: ";
    cin >> base_maior;

    cout << "Digite o tamanho da base menor: ";
    cin >> base_menor;

    cout << "Digite a altura do trapezio: ";
    cin >> altura;

    double area = altura * (base_maior + base_menor) / 2;
    cout << "A area do trapezio: " << area << endl; 

}