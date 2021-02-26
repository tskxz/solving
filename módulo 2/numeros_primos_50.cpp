// Mostrar primeiros numeros primos ate 50

#include <iostream>

int main(){
    for(int i = 1; i<=50; i++){
        int divisor = 2;
        while(i % divisor != 0){
            divisor++;
        }
        if(divisor == i){
            std::cout << i << std::endl;
        }
    }    
}