#include <iostream>

int ganhar_linha(int m[][3], int linha){
	int j1 = 0;
	int j2 = 0;
	for(int i = 0; i<3; i++){
		if(m[linha][i] == 1){
			j1++;
		}

		if(m[linha][i]==2){
			j2++;
		}
	}
	if(j1==3){
		return 1;
	}

	if(j2 == 3){
		return 2;
	}
}

int ganhar_linhas(int m[][3]){
	int temp;
	for(int linha = 0; linha<3;linha++){
		temp = ganhar_linha(m, linha);
		if(temp!= 0){
			return temp;
		}
	}
	return 0;
}

int ganhar_coluna(int m[][3], int coluna){
	int j1 = 0;
	int j2 = 0;
	for(int i = 0; i<3; i++){
		if(m[i][coluna] == 1){
			j1++;
		}
		if(m[i][coluna] == 2){
			j2++;
		}
	}
	if(j1==3){
		cout << "Parabens 1";
		return 1;
	}
	if(j2 == 3){
		cout << "Parabens 2";
		return 2;
	}
}

int ganhar_colunas(int m[][3]){
	int temp;
	for(int coluna = 0; coluna<3;coluna++){
		temp = ganhar_coluna(m, coluna);
		if(temp!=0){
			return temp
		}
	}
	return 0;
}

int ganhar_diagonal(int m[][3]){
	int j1 = 0;
	int j2 = 0;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			if(m[i][j+1] == 1){
				j1++;
			}

			if(m[i][j+1] == 2){
				j2++;
			}
		}
	}
	if(j1 == 3){
		cout << "Parabens 1";
		return 1;
	}
	if(j2 == 3){
		cout << "Parabens 2";
		return 2;
	}
}

int ganhou(int m[][3]){

	if(ganhar_linhas(m)){
		ganhar_linhas(m);
	}

	if(ganhar_colunas(m)){
		ganhar_colunas(m);
	}

	if(ganhar_diagonal(m)){
		ganhar_diagonal(m);
	}
	

}

int main(){
	
	int matriz[3][3];
	int jogadas_1, jogadas_2;

	do {
		int jogada_linha;
		int jogada_coluna;

		int jogada_linha2;
		int jogada_coluna2;


		cin >> jogada_linha;
		cin >> jogada_coluna;
		if(jogada_linha > 2 || jogada_coluna > 2){
			cin >> jogada_linha;
			cin >> jogada_coluna;
		}
		jogadas_1++;

		matriz[jogada_linha][jogada_coluna] = 1;

		cin >> jogada_linha2;
		cin >> jogada_coluna2;
		if(jogada_linha2 > 2 || jogada_coluna2 > 2){
			cin >> jogada_linha;
			cin >> jogada_coluna;
		}
		jogadas_2++;


		matriz[jogada_linha2][jogada_coluna2] = 2;

		if(jogadas_1 == 1){
			cout << "JOGADOR 1 GANHOU";
		}
		if(jogadas_2 == 1){
			cout << "JOGADOR 2 GANHOU!"
		}
	} while(!ganhou);

}