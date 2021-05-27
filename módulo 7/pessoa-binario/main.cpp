#include <iostream>
#include <fstream>

using namespace std;

#include "pessoa.h"
#include "aluno.h"
using namespace std;


int main(){
    pessoa p1;
    p1.preencher();
    p1.imprimir();
    
    ofstream outfile;
    
    outfile.open("p1.dat", ios::binary);
    outfile.write( (const char *)(&p1), sizeof(pessoa) );
    outfile.close();

    pessoa p2;
    
    p2.idade = 10;
    ofstream outfilep2;
    outfilep2.open("p2.dat", ios::binary);
    outfilep2.write( (const char *)(&p2), sizeof(pessoa));
    outfilep2.close();

    ifstream infile;
    
    infile.open("p2.dat", ios::binary);
    infile.read( (char *)(&p2), sizeof(pessoa));
    while(!infile.eof()){
        cout << &p2 << endl;
        infile.read((char *)(&p2), sizeof(pessoa));
    }
    infile.close();
}