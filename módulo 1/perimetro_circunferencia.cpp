// Escreva umm  algoritmo  que  calcule  e  apresente  o  valor  do  perímetro de uma circunferência a partir do seu raio.

#include <iostream>

using namespace std;

int main(){
    
    double PI = 3.14;
    double raio;

    cout << "O raio: ";
    cin >> raio;

    double perimetro = raio * raio * PI;
    cout << "Perimetro da circunferência: " << perimetro << endl;
}