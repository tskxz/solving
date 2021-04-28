// Armazenar dados de 20 alunos (nome, altura, idade)
#include <iostream>
using namespace std;
void preencher_dados(char nome[][100], int idade[], float altura[]){
    for(int i = 0; i < 10; i++){
        cout << "Nome do aluno: ";
        cin >> nome[i];
        cout << "Idade do aluno: ";
        cin >> idade[i];
        cout << "Altura do aluno: ";
        cin >> altura[i];
    }
}
void mostrar_dados(char nome[][100], int idade[], float altura[]){
    for(int i = 0; i < 10; i++){
        cout << nome[i] << " " << idade[i] << " " << altura[i]  << endl;
    }
}
void preencher_idade(int idade[]){
    for(int i = 0; i < 20; i++){
        cout << "Idade do aluno: ";
        cin >> idade[i];
    }
}
void mostrar_idades(int idade[]){
    for(int i = 0; i < 20; i++){
        cout << idade[i] << endl;
    }
}
int main(){
    char nome[20][100];
    int idade[20];
    float altura[20];
    preencher_dados(nome, idade, altura);
    mostrar_dados(nome, idade, altura);
    // preencher_idade(idade);
    // mostrar_idades(idade);
}