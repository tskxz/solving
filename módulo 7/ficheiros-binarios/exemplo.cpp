#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num;
    ofstream myfile("example.bin", ios::binary);
    myfile << 0000000000000001;
    // myfile << 2;
    myfile.close();

    ifstream myfile2("example.bin", ios::binary);
    myfile2 >> num;
    myfile2.close();
    cout << num << endl;
    return 0;
}