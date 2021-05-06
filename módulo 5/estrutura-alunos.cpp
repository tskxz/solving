#include <iostream>
#include <string.h>

using namespace std;

typedef struct Aluno {
    string nome;
    int idade;
    float altura;
} Aluno;

void imprimirAluno(Aluno aluno){
    cout << aluno.nome << " " << aluno.idade << " " << aluno.altura << endl;
}

void setAluno(Aluno *aluno, string nome, int idade, float altura){
    aluno->nome = nome;
    aluno->idade = idade;
    aluno->altura = altura;

}

int main(){
    Aluno Tanjil;
    Aluno TurmaA[20];

    //Tanjil.nome = "tanjil";
    //Tanjil.idade = 15;
    //Tanjil.altura = 1.67;
    //imprimirAluno(Tanjil);
    
    setAluno(&Tanjil, "tanjilk", 15, 1.69);
    imprimirAluno(Tanjil);
}