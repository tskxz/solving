#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream myfile1;
    myfile1.open ("exemplo.txt");
    for(int i=0; i<10; i++)
        myfile1 << (i+1)*2 << "\n";
    myfile1.close();
  
    ifstream myfile2;
    int numero;
    myfile2.open ("exemplo.txt");
    for(int i=0; i<10; i++) {
        myfile2 >> numero;
        cout << numero << endl;
    }
    myfile2.close();
    return 0;
}