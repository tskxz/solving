#include <iostream>
#include <string.hs>

using namespace std;

void inverte(char nome[]){
	// Obtendo o tamanho da string
	int tam;
	for(tam = 0; nome[tam]; tam++);
	cout << "Tamanho: " << tam << endl;

	for(int i = tam-1; i >= 0; i--){
		cout << nome[i];
	}
}

int main(){

	// Um vetor de sring
	// char nome[] = {'t', 'a', 'n', 'j', 'i', 'l', '\0'};
	char nome_1[] = "tanjil";

	// Mostrar a string
	/*int i = 0;
	while(nome[i]){
		cout << nome[i];
		i++;
	}


	// Outra forma de mostrar a string
	i = 0;
	while(nome[i] != '\0'){
		cout << nome[i++];
	}

	i = 0;

	// Outra forma de mostrar a string
	do {
		cout << nome[i];
	} while(nome[i++]);
*/
	inverte(nome_1);



}