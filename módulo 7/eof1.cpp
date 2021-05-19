#include <iostream>
#include <fstream>
using namespace std;

int main () {
// Se estiver a usar o editor online, crie novamente o ficheiro
/*
  ofstream myfile1;
  myfile1.open ("exemplo.txt");
  for(int i=0; i<10; i++)
    myfile1 << (i+1)*2 << "\n";
  myfile1.close();
*/  
  ifstream myfile2;
  int numero;
  myfile2.open ("exemplo.txt");
  if (myfile2.is_open())  {
    while ( myfile2 >> numero ) { // EM VEZ DE while ( !myfile2.eof() ) {
      cout << numero << endl;
    }
    myfile2.close();
  }
  return 0;
}