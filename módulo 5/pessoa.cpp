#include <iostream>
#include "pessoa.h"

using namespace std;

void preencher(pessoa &p){
    cout << "Nome: ";
    cin >> p.nome;
    cout << "Idade: ";
    cin >> p.idade;
}

void imprimir(pessoa &p){
    cout << p.nome << " " << p.idade << endl;
}