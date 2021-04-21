#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

void imprimir_matriz(int matriz[0][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
void diagonal_principal(int matriz[][10]){
    for(int i = 0; i < 10; i++){
        cout << matriz[i][i] << " ";
    }
    cout << endl;
}

void imprimir_dig_princ(int matriz[][10], int linha){
    for(int i = linha; i < 10; i++){
        cout << matriz[i][i-linha] << " ";
    }
    cout << endl;
}

void imprimir_dig_princ_c(int matriz[][10], int coluna){
    for(int i = coluna; i < 10; i++){
        // cout << matriz[coluna][i] << " ";
    }
    cout << endl;
}

int main(){
    int matriz[10][10] = {
        {10,1,2,3,4,5,6,7,8,9},
        {0,9,2,3,4,5,6,7,8,9},
        {0,1,8,3,4,5,6,7,8,9},
        {0,1,2,7,4,5,6,7,8,9},
        {0,1,2,3,6,5,6,7,8,9},
        {0,1,2,3,4,5,6,7,8,9},
        {0,1,2,3,4,5,4,7,8,9},
        {0,1,2,3,4,5,6,3,8,9},
        {0,1,2,3,4,5,6,7,2,9},
        {0,1,2,3,4,5,6,7,8,1}
    };

    imprimir_matriz(matriz);
    cout << "-----------------" << endl;

    diagonal_principal(matriz);
    cout << "-----------------" << endl;

    imprimir_dig_princ(matriz, 0);
    cout << "-----------------" << endl;
    // imprimir_dig_princ_c(matriz, 0);

    cout << "FIM" << endl;
    return 0;
}