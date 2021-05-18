#include <iostream>
#include <cmath>
#include <math.h>
#include "numero.h"

using namespace std;

void numero::preencher(){
    cin >> real;
}

numero::NUMERO(){
    int inteiro = -1;
    double real = -1.1;
}

numero::NUMERO(double _real){
    inteiro = round(_real);
    real = _real;
}

void numero::imprimir(){
    cout << "Inteiro: " << inteiro  << "\n" << "Real: "<< real << endl;
}

void numero::copiar(numero origem){
    inteiro = origem.inteiro;
    real = origem.real;
}

void numero::add(numero n1, numero n2){
    inteiro = n1.inteiro + n2.inteiro;
    real = n1.real + n2.real;
}

void numero::sub(numero n1, numero n2){
    inteiro = n1.inteiro - n2.inteiro;
    real = n1.real - n2.real;
}



int numero::comparar(numero origem){
    if(real > origem.real){
        return 1;
    }
    if(real < origem.real){
        return -1;
    }
    return -10;
}