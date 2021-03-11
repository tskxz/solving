#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char nome[] = "Tanjil";
	char nome_2[] = "Khan";
	

	if(isalpha(nome[0])) {
		cout << "Caracter alfabetico" << endl;
	} else {
		cout << "Caractere numerico" << endl;
	}

	if(isdigit(nome[0])){
		cout << "numero" << endl;
	} else {
		cout << "letra" << endl;;
	}

	if(isupper(nome[0])){
		cout << "maisculo" << endl;
	} else {
		cout << "minusculo" << endl;
	}

	if(islower(nome[0])){
		cout << "minusculo" << endl;
	} else {
		cout << "maisculo" << endl;
	}

	if(isspace(nome[0])){
		cout << "espaco em branco" << endl;
	} else {
		cout << "nao e espaco em branco" << endl;
	}

	if(strcmp(nome, nome_2) == 0){
		cout << "String iguais" << endl;
	} else {
		cout << "Strng diferentes" << endl;
	}

	char c = 'T';
	c = tolower(c);
	cout << c << endl;

	char nome_3[100], sobrenome[100];
	cout << "Digite o nome: ";
	cin >> nome;
	cout << "Digite o seu sobrenome: ";
	cin >> sobrenome;
	strcat(nome, sobrenome);
	cout << "Seu nome: " << nome;

	char str1[100], str2[100];
	cout << "Digite 1 sring: ";
	cin >> str1;
	cout << "Digite 2 string: ";
	cin >> str2;
	if(strstr(str1, str2)) {
		cout << "E substring" << endl;
	} else {
		cout << "nao e substring" << endl;
	}

}