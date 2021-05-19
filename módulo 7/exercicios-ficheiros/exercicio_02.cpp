// Escreva um programa em C++ que peça um número ao utilizador e que preencha um ficheiro de texto com todos os números pares entre 1 e esse número. De seguida deve imprimir o conteúdo desse ficheiro.

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream myfile;
	myfile.open("numeros_pares.txt");

	int num;
	
	cout << "Introduze um numero: ";
	cin >> num;

	for(int i = 0; i <= num; i++){
		if(i % 2 == 0){
			myfile << i << "\n";
		}
	}

	ifstream readfile;
	readfile.open("numeros_pares.txt");

	int pares;
	if(readfile.is_open()){
		while(readfile >> pares){
			cout << pares << endl;
		}
		readfile.close();
	}
	return 0;


}