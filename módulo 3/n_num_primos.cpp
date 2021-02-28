// Faça uma função em C++ que imprima os N primeiros números primos. O valor de N tem que ser maior que 10 e menor que 100. Qualquer valor fora deste intervalo deve imprimir o texto "Não é possivel realizar essa operação"



#include <iostream>
using namespace std;

void primo(int n){
    if(n < 10 || n > 100){
        std::cout << "Nao e possivel realizar essa operacao";
    } else {
        for(int i = 1; i<=n; i++){
            int divisor = 2;
            while(i % divisor != 0){
                divisor++;
            }
            if(divisor == i){
                std::cout << i << ", ";
            }
        }
    }
}

int main(){
    primo(50);
}