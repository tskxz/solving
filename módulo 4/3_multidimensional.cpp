#include <iostream>
using namespace std;

int main(){

	
	int matriz[2][5];
	int linha = 0;
	int coluna = 0;

	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			cin >> matriz[linha][coluna];
		}
	}

	// Somar com primeiro numero da 1 linha com ultimo numero da 2 linha
	soma = matriz[0][4] + matriz[1][1];

	// Comparar se o 3 numero da 1 linha e maior, menor ou igual ao 3 numero da 2 linha
	if(matriz[0][2] == matriz[1][2]){
		cout << "igual" << endl;
	} else if(matriz[0][2] < matriz[1][2]){
		cout << "3 numero da 1 linha e menor que 3 numero da linha 2";
	} else {
		cout << "3 numero da 1 linha e maior que 3 numero da linha 2";
	}
}