// Crie uma função que dado um número, devolve o número de divisores desse número.
#include <iostream>

using namespace std;

int n_divisores(int num){
    int n = 0;
    for(int i = 1; i<=num; i++){
        if(num % i == 0){
            n++;  
        }
    }
    return n;
}

int main(){
    std::cout << n_divisores(10) << std::endl;
}