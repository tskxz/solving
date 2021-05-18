#include <iostream>
#include "numero.h"

using namespace std;
int main(void){
    numero num1(1.01);
    num1.imprimir();
    
    numero num2;
    num2.copiar(num1);
    num2.imprimir();
    num2.real = 4.2;
    cout << num1.comparar(num2) << endl;
    numero n3;
    n3.add(num1, num2);
    n3.imprimir();
    
    
}
