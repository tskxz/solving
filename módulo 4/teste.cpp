#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome[]){
	// Obtendo o tamanho da string
	int tam;
	for(tam = 0; nome[tam]; tam++);
	

	for(int i = tam-1; i >= 0; i--){
		cout << nome[i];
	}
}
 // EX 3

int cont_num_vogais(char nome[]){
	int cont = 0;
	for(int i = 0; nome[i]; i++){
		if(nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u'){
			cont++;
		}
	}
	return cont;
}
// Faça uma função que receba uma cadeia de caracteres como parâmetro e que devolva a posição da 2a ocorrência de uma dada letra, enviada também como parâmetro. Se não existir, devolve -1

int posicao(char nome[], char letra){
	// Tamanho
	int c = 0;
	int tam;
	for(tam = 0; nome[tam]; tam++){
		if(nome[tam] == letra){
			c++;
		}
		if(c == 2){
			return tam;
		}
	}
	return -1;

}
int main(){
	char nome[10];
	cout << "Digite o nome: " << endl;
	cin >> nome;
	inverte(nome);
}