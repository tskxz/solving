#include <stdio.h>
#include <iostream>

using namespace std;

// Existe = 0 (Não)
//Existe = 1 (Sim)

int contemPalavra (char string[], int tamString, char outrastring[], int tamoutraString)
{
    int existe;
    int i;
    for(i = 0 ; i < tamString ; i++)
    {
        int cont = 0;
        while(cont + i < tamString)
        {
            if(string[cont + i] != outrastring[cont])
            {
                existe = 0;
                break;
            } else {
                cont++;
                if(cont == tamoutraString){
                     existe = 1;
                     break;
                }
        }

        if(existe == 1) break;

    }

    return existe;
    
    }
}

int main(){
    char v[] = "vasdfpalavrawesa";
    char t[] = "palavra";
    cout << contemPalavra(v, 30, t, 30) << endl;
}