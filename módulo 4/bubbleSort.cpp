// Algoritmo bubble sort

#include <iostream>

using namespace std;

void preencher_vetor(int vet[], int n){
	for(int i = 0; i<n; i++){
		
		std::cout << "Introduze o valor da posicao " << i << ": ";
		std::cin >> vet[i];

	}
}

void mostrar_vetor(int vet[], int n){
	for(int i = 0; i<n; i++){
		std::cout << vet[i] << ", ";
	}
}

void bubbleSort(int vet[], int n){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n-i-1; j++){
			if(vet[j] > vet[j+1]){
				int temp = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = temp;
			}
		}
	}
}

int main(){
	int vet[15];
	preencher_vetor(vet, 15);
	mostrar_vetor(vet, 15);
	bubbleSort(vet, 15);
	std::cout << std::endl;
	mostrar_vetor(vet, 15);
}