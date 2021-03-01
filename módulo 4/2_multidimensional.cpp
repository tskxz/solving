#include <iostream>
using namespace std;



int main(){
	int matriz[2][3];
	int linha = 0;
	int coluna = 0;

	for(linha = 0; linha < 2; linha++){
		for(coluna = 0; coluna < 3; coluna++){
			cin >> matriz[linha][coluna];
		}
	}

	cout << "Primeira linha: ";
	for(int i = 0; i < 3; i++){
		cout << matriz[0][i] << ", ";
	}
	std::cout << "" << std::endl;

	cout << "Segunda linha: ";
	for(int i = 0; i < 3; i++){
		cout << matriz[1][i] << ", ";
	}
	std::cout << "" << std::endl;

	int soma = 0;
	for(int i = 0; i < 3; i++){
		soma = soma + matriz[0][i];
	}

	cout << "Resultado da soma da primeira linha: " << soma << std::endl;

	int soma_2 = 0;
	for(int i = 0; i<3; i++){
		soma_2 = soma_2 + matriz[1][i];
	}

	cout << "Resultado da soma da segunda linha: " << soma_2 << std::endl;
}
