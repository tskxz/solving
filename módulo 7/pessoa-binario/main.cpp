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
    outfile.open("teste.dat", ios::binary);
    outfile.write( (const char *)(&p1), sizeof(pessoa) );
    outfile.close();
}