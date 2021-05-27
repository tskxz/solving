// Escreva um programa em C++ que peça um número ao utilizador e grave num ficheiro de texto o resultado da tabuada desse número.

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int num;
	
	cout << "Introduze um numero: ";
	cin >> num;

	ofstream myfile;
	myfile.open("tabuada.dat", ios::binary);
	int mult;
	for(int i = 1; i<=10; i++){
		//myfile << num << " X " << i << " = " << num * i << "\n";
		mult = num * i;
		myfile.write( (const char *)(&mult), sizeof(int));
	}
	myfile.close();
	return 0;
}