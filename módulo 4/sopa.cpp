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


	int pesquisa(char m[][10], char palavra[], int linha){
		char palavras[][10] = {"Ola", "Mundo"};
		char matriz[10][10] = {};
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

void imprimir_matriz(char m[][10]){
    char letras[30][30] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","x","y","z"};
    for(int linha = 0; linha<10; linha++){
        for(int coluna = 0; coluna<10;coluna++){
            if(m[linha][coluna]){
                cout << m[linha][coluna] << " ";
            } else {
                int x = rand() % 26;
	            cout << letras[x] << " ";
                
            }
        }
        cout << endl;
    }
}

void imprimir_matriz_limpa(char m[][10], char palavra[]){

    for(int linha = 0; linha<10;linha++){
        for(int coluna = 0; coluna<10; coluna++){
            if(m[linha][coluna] != palavra[0]){
                if(m[linha][coluna]!=palavra[1]){
                    m[linha][coluna] = '.';
                    cout << m[linha][coluna] << " ";
                }
                
            } else {
                cout << palavra;
            }
        }
        cout << endl;
    }
}

int main(){
	// Adicionar linha 
	
	char palavras[][10] = {"ola", "mundo", "um", "dois", "tres"};
	char matriz[10][10] = {};
	
	srand(time(0));
	int p = rand() % 5;
	cout << "Palavra" << palavras[p] << endl;
	adicionar_linha(matriz, rand() % 10, palavras[p]);
    
    imprimir_matriz(matriz);
	imprimir_matriz_limpa(matriz, palavras[p]);
	cout << "-------------------------------------------------" << endl;
	// Adicionar coluna
	p = rand() % 5;
	adicionar_coluna(matriz, rand() % 10, palavras[p]);
    cout << "Palavra" << palavras[p] << endl;
    imprimir_matriz(matriz);
    

	
}


