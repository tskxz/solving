#include "aluno.h"
#include <iostream>
using namespace std;

void aluno::preencher(){
    cout << "Turma: ";
    cin >> turma;
    
    cout << "Ano: ";
    cin >> ano;
}

void aluno::imprimir(){
    cout << turma << ": " << ano;
}