// Escreve uma função em C++ que recebe como parâmetros o nome de um ficheiro e um número inteiro e que cria um ficheiro (com o nome enviado como parâmetro) e que armazena todos os números pares entre 10 e esse número. 

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void pares(char nome_ficheiro[100], int num){
	cout << "Nome do ficheiro escolhido: ";
	int n = 0;
	do {
		cout << nome_ficheiro[n];
	} while(nome_ficheiro[n++]);
	cout << "\n" << endl;
	ofstream file;
	file.open(nome_ficheiro);
	if(num < 10){
		cout << "Nao pode ser mais que 10!" << endl;
		exit(1);
	} else {
		for(int i = 10; i <= num; i++){
			if(i % 2 == 0){
				file << i << "\n";
			}
		}
	}
	file.close();
}

int main(){
	pares("numeros_pares_10.txt", 200);
}	