#include <iostream>

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

int sair(int vet[], int n, int valor){
	for(int i = 0; i < n; i++){
		if(valor == vet[i]){
			return i;
		}
	}
}

int main(){
	int num;
	cin >> num;
	int euromilhoes[5] = {1,5,4,1,8};
	bubbleSort(euromilhoes, 5);
	int s = sair(euromilhoes, num, 5);
	std::cout << s << std::endl;
}