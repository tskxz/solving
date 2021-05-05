/*
Imagine que tem uma turma com 20 alunos e que pretende armazenar os nomes, as idades e as alturas de cada um dos seus elementos.

Para isso vai utilizar 3 estruturas de dados:
 - char nomes[20][25]
 - float alturas[20]
 - int idades[20]

1. Criar a função preencher para adicionar alunos às estruturas
2. Criar a função imprimir para adicionar alunos às estruturas
3. Criar a função pesquisar que pesquisar_nome que devolve o índice do primeiro aluno encontrado com o nome enviado como parâmetro
4. Criar a função ordenar_idade que altera os dados das estruturas, colocando-as ordenadas de forma crescente pelas idades

*/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void preencher_dados(char nome[][100], int idade[], float altura[], int n_elementos){
    for(int i = 0; i < n_elementos; i++){
        cout << "Nome do aluno: ";
        cin >> nome[i];
        cout << "Idade do aluno: ";
        cin >> idade[i];
        cout << "Altura do aluno: ";
        cin >> altura[i];
    }
}

void mostrar_dados(char nome[][100], int idade[], float altura[], int tam){
    for(int i = 0; i < tam; i++){
        cout << nome[i] << " " << idade[i] << " " << altura[i]  << endl;
    }
}

void preencher_idade(int idade[], int n){
    for(int i = 0; i < n; i++){
        cout << "Idade do aluno: ";
        cin >> idade[i];
    }
}

void mostrar_idades(int idade[], int n){
    for(int i = 0; i < n; i++){
        cout << idade[i] << endl;
    }
}

int pesquisar_nome(string nome, char nome_v[][100], int tam){
    for(int i = 0; i < tam; i++){
        if(nome_v[i] == nome){
            // cout << "Encontrou se na posicao: " << i << endl;
            return i;
        }
    }
}

void ordenar_idades(int idades[], char nome_v[][100], float altura[], int n){
    if(n <= 0){
        cout << "Nao pode ser negativo!";
    }
    char temp_c[100];
    for(int i = 0; i<n; i++){
		for(int j = 0; j<n-i-1; j++){
			if(idades[j] > idades[j+1]){
				int temp = idades[j];
                strcpy(temp_c, nome_v[j]);
                int temp_f = altura[j];

				idades[j] = idades[j+1];
                strcpy(nome_v[j], nome_v[j+1]);
                altura[j] = altura[j+1];

				idades[j+1] = temp;
                strcpy(nome_v[j+1], temp_c);
                altura[j+1] = temp_f;
			}
		}
	}
}

int comparar(const char s1[], const char s2[]){
    for(int i = 0; s1[i] || s2[i]; i++){
        if(s1[i] > s2[i]){
            return 1;
        }
        if(s2[i] > s1[i]){
            return -1;
        }
        return 0;
    }
}

void ordenar_nomes(int idades[], char nome_v[][100], float altura[], int n){
    if(n <= 0){
        cout << "Nao pode ser negativo!";
    }
    char temp_c[100];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(comparar(nome_v[j], nome_v[j+1]) == 1){
                int temp = idades[j];
                strcpy(temp_c, nome_v[j]);
                int temp_f = altura[j];

                idades[j] = idades[j+1];
                strcpy(nome_v[j], nome_v[j+1]);
                altura[j] = altura[j+1];

                idades[j+1] = temp;
                strcpy(nome_v[j+1], temp_c);
                altura[j+1] = temp_f;
            }
        }
    }
}


void mostrar_nomes(char nome_v[][100], int n){
    for(int i = 0; i < n; i++){
        cout << nome_v[i] << endl;
    }
}



int main(){

    char nome[20][100];
    int idade[20];
    float altura[20];
    cout << "------------------------" << endl;
    cout << "ESTRUTURA DE ALUNOS" << endl;
    
    preencher_dados(nome, idade, altura, 3);
    mostrar_dados(nome, idade, altura, 3);
    //ordenar_idades(idade, nome, altura, 3);
    
    //cout << "------------------------" << endl;
    //cout << "Estrutura Ordenada por idades" << endl;
    
    
    //cout << comparar("ANA", "ana") << endl;
    cout << "Estrutura Ordenada por idades" << endl;
    cout << "------------------------" << endl;
    ordenar_nomes(idade, nome, altura, 3);
    mostrar_dados(nome, idade, altura, 3);
}