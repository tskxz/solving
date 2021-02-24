// Calcule a média aritmética de dois testes

#include <iostream>
using namespace std;

int main(){
    
    double nota_1;
    double nota_2;

    cout << "Digite a primeira nota: ";
    cin >> nota_1;

    cout << "Digite a segunda nota: ";
    cin >> nota_2;

    double media = nota_1 / nota_2;
    cout << "A media das notas: " << media << std::endl;
    
}