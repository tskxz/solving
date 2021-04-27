// Mostrar o máximo da media de varios vetores

#include <iostream>
#include <stdlib.h>
using namespace std;


// Funcao para inserir elementos para o vetor passado no parametro da funcao
void inserir_elementos(int n_elementos, int vetor[]){
    int n_elems;
    if(n_elementos <= 0){
        do {
            cout << "Nao pode ser negativo!" << endl;

            cout << "Introduze outra vez o numero de elementos: ";
            cin >> n_elems;
        } while(n_elems < 0);
        cout << endl;
       // cout << "!!SO PODE INSERIR NUMEROS!!" << endl;

        for(int i = 0; i < n_elems; i++){
        
        cout << "Insire um elemento para o valor " << i << ": ";
        cin >> vetor[i];
        }
    }

    cout << endl;
    //cout << "!!SO PODE INSERIR NUMEROS!!" << endl;

    for(int i = 0; i < n_elementos; i++){
        
        cout << "Insire um elemento para o valor " << i << ": ";
        cin >> vetor[i];
    }
}

// Funcao para retornar a media do vetor
double media(int n_elementos, int vetor[]){
    if(n_elementos <= 0){
        cout << "Verifique o numero de elementos outra vez" << endl;
        return -1;
    } else {
        int soma = 0;
        for(int i = 0; i < n_elementos; i++){
            soma = soma + vetor[i];
        }
        return soma / n_elementos;
    }
}

double maximo(double media1, double media2){
    if(media1 > media2){
        return media1;
    } else if(media2 > media1){
        return media2;
    } else {
        cout << "Sao iguais" << endl;
        return -1;
    }
}

int main(){
    int vetor1[10];
    int vetor2[10];
    inserir_elementos(-1, vetor1);
    inserir_elementos(10, vetor2);
    
    cout << endl;
    
    double media1 = media(10, vetor1);
    double media2 = media(10, vetor2);

    cout << "Media do primeiro vetor: " << media1 << endl;
    cout << "Media do segundo vetor: " << media2 << endl;

    cout << "O maximo da media e o que tem de media " << maximo(media1, media2) << endl;
}