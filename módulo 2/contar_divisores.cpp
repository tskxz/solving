// Dado um número,conte os seus divisores

#include <iostream>

int main(){
    int num;
    std::cin >> num;

    int c = 0;

    for(int i = 1; i<=num; i++){
        if(num % i == 0){
            c++;
        }
    }
    
    std::cout << c << std::endl;
}