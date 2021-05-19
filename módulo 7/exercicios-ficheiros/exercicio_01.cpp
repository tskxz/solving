// Escreva um programa em C++ que peça um número ao utilizador e grave num ficheiro de texto o resultado da tabuada desse número.

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int num;
	
	cout << "Introduze um numero: ";
	cin >> num;

	ofstream myfile;
	myfile.open("tabuada.txt");
	for(int i = 1; i<=10; i++){
		myfile << num << " X " << i << " = " << num * i << "\n";
	}
	myfile.close();
	return 0;
}