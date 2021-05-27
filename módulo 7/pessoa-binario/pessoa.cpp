#include <iostream>
using namespace std;

#include "pessoa.h"

void pessoa::preencher(){
    cout << "Nome: ";
    cin >> nome;
    
    cout << "Idade: ";
    cin >> idade;
}

void pessoa::imprimir(){
    cout << nome << ":" << idade;
}