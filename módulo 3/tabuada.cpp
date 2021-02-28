/*
    Crie uma função em C++ chamada tabuada, que dada um número escreve a tabuada no formato:

         1 x num = ...
         2 x num = ...
         ...
       Esta função deve utilizar outra função chamada imprimir_linha que é responsável por imprimir cada linha da tabuada
*/

#include <iostream>
using namespace std;

void imprimir_linha(int num, int i){
    std::cout << num << " x " << i << " = " << num * i << std::endl;
}

void tabuada(int num){
    for(int i = 1; i<=10; i++){
        imprimir_linha(num, i);
    }
}

int main(){
    tabuada(2);
}