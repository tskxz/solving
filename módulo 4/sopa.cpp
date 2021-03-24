#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Adicionar as palavras

// Tamanho;
int n_palavra(char palavra[]){
	int c = 0;
	for(;palavra[c];c++);

	return c;
}

// Adicionar na linha
void adicionar_linha(char m[][10], int linha, char palavra[]){
	int coluna = rand() % (10-n_palavra(palavra) + 1);
	for(int i = 0; palavra[i]; i++){
		m[linha][coluna+i] = palavra[i];
	}
}

// Adicionar coluna

void adicionar_coluna(char m[][10], int coluna, char palavra[]){
	int linha = rand() % (10 - n_palavra(palavra) + 1);
	for(int i = 0; palavra[i];i++){
		m[linha+i][coluna] = palavra[i];
	}
}

// Pesquisas
char palavras[][10] = {"Ola", "Mundo"};
char matriz[10][10] = {};

int pesquisa(char m[][10], char palavra[], int linha){
	for(int coluna = 0; coluna<10-n_palavra(palavra)+1;coluna++){
		if(m[linha][coluna] == palavra[0]){
			int encontrou = 1;
			for(int i = 1; palavra[i]; i++){
				if(m[linha][coluna+i]!=palavra[i]){
					encontrou = 0;
					break;
				}
			}
			if(encontrou){
				return 1;
			}
		}

	}
	return 0;
}

// Imprimir matriz
void imprimir_matriz(char matriz[][10]){
	for(int i = 0; i < 10; i++){
		cout << matriz[i] << " ";
	}
}


int main(){
	// Adicionar linha 
	char palavras[][10] = {"teste", "ola", "mundo"};
	char matriz[][10] = {};
	srand(time(0));
	int p = rand() % 3;
	adicionar_linha(matriz, rand() % 10, palavras[p]);

	// Adicionar coluna
	
	char palavras_col[][10] = {"um", "dois", "tres"};
	int p_1 = rand() % 3;
	adicionar_coluna(matriz, rand() % 10, palavras[p_1]);
	
	// Pesquisar em todas linhas
	for(int i = 0; i < 10; i++){
		pesquisa(matriz, palavras[0], i);
	}
	

	imprimir_matriz(matriz);
}


