// Escreva uma função em C++ que recebe como parâmetros dois nomes de ficheiros, origem e destino. Esta função duplica o conteúdo de origem para destino. O ficheiro origem é constituído por números reais.

#include <iostream>
#include <fstream>

using namespace std;

void copiar(char origem[100], char destino[100]){
	ifstream origem_;
	origem_.open(origem);

	
	ofstream destino_;
	destino_.open(destino);
	double nums;
	if(destino_.is_open()){
		while(origem_ >> nums){
			destino_ << nums << "\n";
		}
		destino_.close();
	}
	origem_.close();
}

int main(){
	copiar("tantosnumeros.txt", "copianumeros.txt");
	return 0;
}