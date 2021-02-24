// Sendo   dadas   as   medidas   dos   dois   catetos   de   um   triângulo rectângulo, calcule a hipotenusa e o perímetro do triângulo.


#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    int cateto_1;
    int cateto_2;

    cout << "Digite o primeiro valor do cateto: ";
    cin >> cateto_1;

    cout << "Digite o segundo valor do cateto: ";
    cin >> cateto_2;

    double hipotenusa = cateto_1 * cateto_1 + cateto_2 * cateto_2;
    hipotenusa = sqrt(hipotenusa);

    std::cout << "A hipotenusa do triangulo e: " << hipotenusa << std::endl;

    double perimetro = cateto_1 + cateto_2 + hipotenusa;
    std::cout << "O perimetro do triangulo: " << perimetro << std::endl;
    
}