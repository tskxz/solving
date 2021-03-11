#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char nome[50];
	std::cout << "Digite um nome: ";
	cin >> nome;
	cout << "O nome armazenado é: " << nome << " que tem " << strlen(nome) << " caractere" << endl;
	return 1; 
}