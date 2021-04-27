// Mostrar o máximo da media de varios vetores

#include <iostream>
using namespace std;


// Funcao para inserir elementos para o vetor passado no parametro da funcao
void inserir_elementos(int n_elementos, int vetor[]]){
    for(int i = 0; i < n_elementos; i++){
        cout << "Insire um elemento para o valor " << i << ": ";
        cin >> vetor[i];
    }
}

// Funcao para retornar a media do vetor
double media(int n_elementos, int vetor[]){
    int soma = 0;
    for(int i = 0; i < n_elementos; i++){
        soma = soma + vetor[i];
    }
    return soma / n_elementos;
}

int main(){

}