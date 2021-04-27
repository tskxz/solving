#include <iostream>
#include <string.h>
#include <string>
#include <typeinfo>

using namespace std;

double adicao(double a, double b){
    return a+b;
}

double subtract(double a, double b){
    return a-b;
}

double multi(double a, double b){
    return a*b;
}

double division(double a, double b){
    if(b != 0){
        return a / b;
    } else {
        cout << "Math Error!" << endl;
        return -1;
    }
}

void calculadora(double a, char operador, double b){
    switch (operador)
    {
    case '+':
        cout << "O resultado: " << adicao(a, b) << endl;
        break;
    case '-':
        cout << "O resultado: " << subtract(a, b) << endl;
        break;
    case 'x':
    case '*':
        cout << "O resultado: " << multi(a, b) << endl;
        break;
    case '/':
    case ':':
        cout << "O resultado: " << division(a, b) << endl;
        break;

    default:
        cout << "Algum erro aconteceu!" << endl;
        break;
    }
}

int main(){
    
    double a;
    char op;
    double b;

    cout << "|| CALCULADORA ||" << endl;
    cout << "Faca ctrl+c se quiser sair\n\n" << endl;
    do {
        cout << "Operacao: ";     
        
        cin >> a;
        // cout << typeid(a).name() << endl;
        cin >> op;
        // cout << typeid(op).name() << endl;
        cin >> b;
        // cout << typeid(b).name() << endl;
        // std::string descobrir = typeid(b).name();
        // cout << typeid(descobrir).name() << endl;

        calculadora(a, op, b);
        
        
    } while (true);
}