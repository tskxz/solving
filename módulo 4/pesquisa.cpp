#include <iostream>

using namespace std;

int pesquisa1(double vet[], int n, double valor){
	for(int i = 0; i<n; i++){
		if(v[i] == valor){
			return 1;
		}
	}
	return 0;
}

int pesquisa2(double vet[], int n, double valor){
	for(int i = 0; i<n;i++){
		if(v[i] == valor){
			return i;
		}

	}
	return -1
}

int pesquisaLinear(double v[], int n, double valor){
	for(int i = 0; i<n; i++){
		if(v[i] == valor){
			return i;
		}
	}
	return -1;
}

int pesquisa_linear_ordenada(double v[], int n, double vetor){
	for(int i = 0; i<n; i++){
		if(v[i] == valor){
			return i;
		}
		if(valor < v[i]){
			return -1;
		}
	}
	return -1;
}

int pesquisaBinariaRec(double v[], int inicio, int fim, double valor){
	if(inicio > fim){
		return -1;
	}
	int meio = (fim + inicio)/2;
	if(v[meio] == valor){
		return meio;
	}
	if(valor>v[meio]){
		return pesquisaBinariaRec(v, meio+1, fim, valor);
	} else {
		return pesquisaBinariaRec(v, incio, meio-1, valor);
	}
}

int pesquisaBinaria(double v[], int n, double valor){
	return pesquisaBinariaRec(v, 0, n-1, valor);
}