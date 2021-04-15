#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <ctype.h>
#include <string.h>

using namespace std;

#define LINHA 1
#define COLUNA 2
#define DIAGONAL 3

int n_palavra (char palavra[] ){

    int c=0;
    
    for( ; palavra[c] ; c++);
        return c;
    }

int testar_adicionar_l(char m[][10], int linha, int coluna, char palavra[]) {

    for(int i =0; palavra[i]; i++){
        if(m[linha][coluna+i]!='\0'){
            return 0;  
        } 
    }
  return 1;
}

int testar_adicionar_c(char m[][10], int linha, int coluna, char palavra[]) {

    for(int i =0; palavra[i]; i++){
        if(m[linha+i][coluna]!='\0'){
            return 0;  
        } 
    }
    
    return 1;
}



void adicionar_l(char m[][10], int linha, char palavra[], int &add) {

    int coluna = rand()%(10 - n_palavra(palavra) + 1);
    add=0;
    if(testar_adicionar_l(m, linha, coluna, palavra)){
        add = 1;
        for(int i =0; palavra[i]; i++){
            m[linha][coluna+i]=palavra[i];
        }
    }
}

void adicionar_c(char m[][10], int coluna, char palavra[], int &add) {
    
    int linha = rand()%(10 - n_palavra(palavra) + 1);
    add = 0;
    if(testar_adicionar_c(m, linha, coluna, palavra)){
        add = 1;
        for(int i =0; palavra[i]; i++){
            m[linha+i][coluna]=palavra[i];
        
        }

    }
}

void adicionar_palavra(char m[][10], int tipo, char palavra[]) {
    int pos_palavra = rand()%(10 - n_palavra(palavra) + 1);
    int pos_matriz = rand()%10;
  
    for(int i =0; palavra[i]; i++){
      
        switch(tipo){
            case LINHA:
                if(m[pos_matriz][pos_palavra+i]==0){
                    m[pos_matriz][pos_palavra+i]=palavra[i];
                } else {
                    cout<<"Não foi possivel inserir a palavra nesta linha"<<endl;
                }
            break;
            case COLUNA:
                if(m[pos_matriz][pos_palavra+i]==0){
                    m[pos_palavra+i][pos_matriz]=palavra[i];
                } else {
                    cout<<"Não da para meter a palavra na linha"<<endl;
          }      
          break;  
      } 
  }
}

int adicionar_palavra_2(char m[][10], int tipo, char palavra[]) {
    int pos_matriz = rand()%10;
    int adicionado = 0;
      switch(tipo){
        case LINHA:
          adicionar_l(m, pos_matriz, palavra, adicionado);
          break;
        case COLUNA:
          adicionar_c(m, pos_matriz, palavra, adicionado);
          break;  
      } 
      cout<<"Tipo: " << tipo << endl;
      cout << "Palavra: "<<  palavra << endl;
      cout << "posicao: " <<pos_matriz<<endl;
      cout << "-----------------------------------------" << endl;
      return adicionado;
  
}

void confirm_m(char m[][10], char p[]){



srand(time(0)); 

  for(int i=0; i<10; i++){

    for(int j=0; j<10; j++){
        
        int h =rand()%26;

        if(m[i][j] ==0){

        m[i][j] = p[h];



        } 

    }

  }

}

void imprimir_matriz(char m[][10]){

  for(int linha=0; linha<10; linha++){

    for(int coluna=0; coluna<10; coluna++){
      
      if(m[linha][coluna] == '\0' ){
      
      cout<<".";
      }else{
          cout<<m[linha][coluna];
      }
      cout<<" ";
    }
    cout<<endl;
  }

}



void duplicar( char m1[][10], char m2[][10]){
    
    char abc[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    
    for(int linha=0; linha<10; linha++){

    for(int coluna=0; coluna<10; coluna++){
      
      if(m1[linha][coluna] == '\0' ){
          
          m2[linha][coluna] = abc[rand()%26];

       } else {
          m2[linha][coluna]=m1[linha][coluna];
    
       }
    }
    
  }



    
}


int main(){

    int ver=0;
    
    char original[10][10]={};
    
    char copia[10][10]={};
    
    char palavra[][6]={
        "ola",
        "mundo",
        "teste",
        "um",
        "dois",
        "tres",
        "massa",
        "arroz",
        "carne"
    };


    srand(time(0));

    for(int i=0; i<6; ){
        int p=rand()%9;
        
        if(adicionar_palavra_2(original,rand()%2 + 1, palavra[p])){
            i++;
        };
        
        cout<<palavra[p]<<endl;
    }

    duplicar(original, copia);
    
    imprimir_matriz(copia);
    cout << "------------------------" << endl;
    imprimir_matriz(original);
    
    return 0;
    
    }
