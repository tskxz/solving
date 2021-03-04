// 1 - Escreva uma função em C++ que preencha uma matriz de 5x4​
// 2 - Escreva uma função em C++ que imprima a diagonal principal de uma matriz de 5x5​
// 3 - Escreva uma função em C++ que devolva a soma de todas as colunas nas posições ímpares(1ª, 3ª, …) de uma matriz de 4x10​


#include <iostream>

using namespace std;

int main(){

	// PARTE 1
	int matriz[5][4];
	for(int linha = 0; linha < 5; linha++){
		for(int coluna = 0; coluna < 4; coluna++){
			cin >> matriz[linha][coluna];
		}
	}


	// PARTE 2
	int matriz[5][5];
	for(int i = 0; i<5; i++){
		cin >> matriz[i][i];
	}

	// PARTE 3
	int matriz[4][10];
	for(int linha = 0; linha < 4; linha++){
		for(int coluna = 0; coluna < 10; coluna++){
			cin >> matriz[linha][coluna];
		}
	}

	int soma = 0;
	for(int linha = 0; linha < 4; linha++){
		for(int coluna = 0; coluna < 10; coluna++){
			if(coluna % 2 != 0){
				soma = soma + matriz[linha][coluna];
			}
		}
	}

}
