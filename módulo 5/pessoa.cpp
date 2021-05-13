#include <iostream>
#include "pessoa.h"

using namespace std;

void pessoa::preencher(){
    cout << "Nome: ";
    cin >> nome;
    cout << "Idade: ";
    cin >> idade;
}

void pessoa::imprimir(){
    cout << nome << " " << idade << endl;
}