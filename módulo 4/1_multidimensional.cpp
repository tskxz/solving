#include <iostream>
using namespace std;



int main(){
	int matriz[3][5];
	int linha = 0;
	int coluna = 0;

	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 5; coluna++){
			cin >> matriz[linha][coluna];
		}
	}

	// Exibir na tela o 1º Numero da 1º Linha
	std::cout << matriz[0][0] << std::endl;

	// 3º numero da 2 linha
	std::cout << matriz[1][2] << std::endl;

	// 5º numero da 3 linha
	std::cout << matriz[2][5] << std::endl;
}
