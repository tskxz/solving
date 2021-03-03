// 1- Faça um programa que preencha uma matriz 4 x 4 e de seguida conte e escreva quais os valores maiores que 10.
// 2- Faça um programa que preencha uma matriz 3 x 5, imprima a matriz e retorne a localização (linha e a coluna) do maior valor
// 3- Converta para funções as duas tarefas anteriores.


#include <iostream>
using namespace std;

// PARTE 3

int maiores10(int matriz[][], int linha, int coluna){
	for(int i = 0; i < linha; linha++){
		for(int j = 0; j < coluna; coluna++){
			cin >> matriz[i][j];
		}
	}

	int contador = 0;
	for(int i = 0; i<linha; linha++){
		for(int j = 0; j < coluna; coluna++){
			if(matriz[i][j] > 10){
				cout << matriz[i][j] << ", ";
				contador++;
			}
		}
	}
	return contador;
}

int posicao_maiorvalor(int matriz[][], int linha, int coluna){
	int maximo = 0;
	for(int i = 0; i < linha; linha++){
		for(int j = 0 j < coluna; coluna++){
			cin >> matriz[i][j];
			if(matriz[i][j] > maximo){
				maximo = matriz[i][j];
			}
		}
	}

	for(int i = 0; i < linha; linha++){
		for(int j = 0; j < coluna; coluna++){
			if(maximo == matriz[i][j]){
				cout << "Linha: " << i << endl;
				cout << "Coluna: " << j << endl;
			}
		}
	} 
}

int main(){

	// PARTE 1
	int matriz[4][4];
	for(int linha = 0; linha < 4; linha++){
		for(int coluna = 0; coluna < 4; coluna++){
			cin >> matriz[linha][coluna];
		}
	}

	int contador = 0;
	for(int linha = 0; linha < 4; linha++){
		for(int coluna = 0; coluna < 4; coluna++){
			if(matriz[linha][coluna] > 10){
				contador++;
			}
		}
	}

	// PARTE 2
	int matriz[3][5];
	int maximo = 0;
	for(int linha = 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 5; coluna++){
			cin >> matriz[linha][coluna];
			if(matriz[linha][coluna] > maximo){
				maximo = matriz[linha][coluna];
			}
		}
	}

	for(int linha = 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 5; coluna++){
			cout << matriz[linha][coluna] << ", ";
		}
	}

	for(int linha = 0; linha < 3; linha++){
		for(int coluna = 0; coluna < 5; coluna++){
			if(maximo == matriz[linha][coluna]){
				cout << "Linha: " << linha << endl;
				cout << "Coluna: " << coluna << endl;
			}
		}
	}

}

