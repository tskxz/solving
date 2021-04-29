/*
Imagine que tem uma turma com 20 alunos e que pretende armazenar os nomes, as idades e as alturas de cada um dos seus elementos.

Para isso vai utilizar 3 estruturas de dados:
 - char nomes[20][25]
 - float alturas[20]
 - int idades[20]

1. Criar a função preencher para adicionar alunos às estruturas
2. Criar a função imprimir para adicionar alunos às estruturas
3. Criar a função pesquisar que pesquisar_nome que devolve o índice do primeiro aluno encontrado com o nome enviado como parâmetro
4. Criar a função ordenar_idade que altera os dados das estruturas, colocando-as ordenadas de forma crescente pelas idades

*/

#include <iostream>
using namespace std;
void preencher_dados(char nome[][100], int idade[], float altura[]){
    for(int i = 0; i < 3; i++){
        cout << "Nome do aluno: ";
        cin >> nome[i];
        cout << "Idade do aluno: ";
        cin >> idade[i];
        cout << "Altura do aluno: ";
        cin >> altura[i];
    }
}
void mostrar_dados(char nome[][100], int idade[], float altura[]){
    for(int i = 0; i < 3; i++){
        cout << nome[i] << " " << idade[i] << " " << altura[i]  << endl;
    }
}
void preencher_idade(int idade[]){
    for(int i = 0; i < 3; i++){
        cout << "Idade do aluno: ";
        cin >> idade[i];
    }
}
void mostrar_idades(int idade[]){
    for(int i = 0; i < 3; i++){
        cout << idade[i] << endl;
    }
}

void pesquisar_nome(string nome, char nome_v[][100]){
    for(int i = 0; i < 3; i++){
        if(nome_v[i] == nome){
            cout << "Encontrou se na posicao: " << i << endl;
            // return i;
        }
    }
}

void mostrar_nomes(char nome_v[][100]){
    for(int i = 0; i < 3; i++){
        cout << nome_v[i] << endl;
    }
}
int main(){
    char nome[20][100];
    int idade[20];
    float altura[20];
    cout << "------------------------" << endl;
    cout << "ESTRUTURA DE ALUNOS" << endl;
    
    preencher_dados(nome, idade, altura);
    mostrar_dados(nome, idade, altura);
    mostrar_nomes(nome);
    pesquisar_nome("tanjil", nome);
    
    // preencher_idade(idade);
    // mostrar_idades(idade);
}