// Escreva um programa em C++ que leia o conteúdo de um ficheiro (que contém apenas números inteiros) e imprima apenas aqueles que são múltiplos de 3

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream myfile;
	myfile.open("multiplos_3.txt");
	for(int i = 0; i < 300; i++){
		myfile << i << "\n";
	}
	myfile.close();
	
	ifstream myfile2;
	myfile2.open("multiplos_3.txt");

	int multiplos;
	if(myfile2.is_open()){
		while(myfile2 >> multiplos){
			if(multiplos % 3 == 0){
				cout << multiplos << endl;
			}
		}
		myfile2.close();
	}
	
	return 0;
}