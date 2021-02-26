// Imprimir todos os numeros impares ate 10

#include <iostream>

int main(){
    for(int i = 0; i<=10; i++){
        if(i % 2 != 0 ){
            std::cout << i << ", ";
        }
    }
}