// Preencher um vetor e mostrar o vetor

#include <iostream>

using namespace std;

void preencher_vetor(int vet[], int n){
	for(int i = 0; i<n; i++){
		
		std::cout << "Introduze o valor da posicao " << i;
		std::cin >> vet[i];

	}
}

void mostrar_vetor(int vet[], int n){
	for(int i = 0; i<n; i++){
		std::cout << vet[i];
	}
}


int main(){
	
	int vet[15];
	preencher_vetor(vet, 15);
	mostrar_vetor(vet, 15);
}