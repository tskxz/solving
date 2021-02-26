// Dado um número, verificar se é primo ou não

#include <iostream>
using namespace std;

int main(){
    
    int num;
    int c = 0;
    
    std::cout << "Introduze o numero: ";
    std::cin >> num;

    for(int i = 1; i<=num; i++){
        if(num % i == 0){
            c++;
        }
    }
    if(c == 2){
        std::cout << "É primo";
    } else {
        std::cout << "Nao é primo";
    }

}