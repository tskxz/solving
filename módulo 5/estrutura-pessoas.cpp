#include <iostream>
#include <string.h>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    
    Pessoa(){
        nome = "Sem nome";
        idade = 0;
    }

    Pessoa(string anome, int aidade){
        nome = anome;
        idade = aidade;
    }
};



int main(){
    Pessoa p1("Tanjil", 15);
    cout << "Nome: " << p1.nome << endl;
    cout << "Idade: " << p1.idade << endl;
}