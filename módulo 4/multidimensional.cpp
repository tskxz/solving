#include <iostream>

using namespace std;



int main(){
	
	int linha = 0;
	int coluna = 0;
	int matriz[2][5];

	for(linha = 0; linha < 2; linha++){
		std::cout << "seguinte linha" << std::endl;
		for(coluna=0; coluna < 5; coluna++){
			std::cin >> matriz[linha][coluna];
		}
	}

	for(linha = 0; linha < 2; linha++){
		std::cout << "seguinte linha" << std::endl;
		for(coluna = 0; coluna < 5; coluna++){
			std::cout << matriz[linha][coluna];
		}
	}


}