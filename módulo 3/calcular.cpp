// Criar uma função chamada calcular, que recebe 3 parãmetros, op1, op e op2, sendo op1 e op2 numérico e op um char que corresponde às 4 operações aritméticas (+, -, x, /)

// Criar uma função, calcular_validado, que valida os dados e só imprime se a operação for possível. Pode ajustar a função calcular se necessário

// Crie a função is_primo(int numero) que devolve true (1) ou false (0) se o número for primo. A função só é valida para números naturais e não deve fazer qualquer output. Teste a função com diversos valores.

#include <iostream>

int is_primo(int n){
    if(n < 0){
        return -1;
    } else {
        int c = 0;
        for(int i = 1; i<=n; i++){
            if(n % i == 0){
                c++;
            }
        }
        if(c == 2){
            return 1;
        } else {
            return 0;
        }
    }
}

void calcular_validado(double op1, char op, double op2){
    switch(op){
        case '+':
        case '-':
        case 'x':
            std::cout << calcular(op1, op, op2) << std::endl;
            break;
        case '/':
            if(op2 == 0){
                std::cout << "Math error" << std::endl;
            } else {
                std::cout << calcular(op1, op, op2) << std::endl;
                break;
            }
        default:
            std::cout << "Operacao Invalida" << std::endl;

    }
}

double calcular(double op1, char op, double op2){
    switch (op)
    {
    case '+':
        return op1 + op2;
    
    case '-':
        return op1 - op2;

    case 'x':
        return op1 - op2;
    
    case '/':
        return op1 - op2;

    default:
        break;
    }
    std::cout << "Operacao Invalida";
    return -1;
}

int main(){
    int num_1, num_2;
    char op;
    std::cout << "Op1: ";
    std::cin >> num_1;
    
    std::cout << "op: ";
    std::cin >> op;

    std::cout << "Op2: ";
    std::cin >> num_2;

    
    std::cout << calcular(num_1, op, num_2);

}