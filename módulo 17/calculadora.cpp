#include <iostream>
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
    if(b == 0){
        cout << "Impossible" << endl;
        return -1;
    } else {
        return a / b;
    }
}

void calculadora(double a, char operador, double b){
    switch (operador)
    {
    case '+':
        cout << adicao(a, b);
        break;
    case '-':
        cout << subtract(a, b);
        break;
    case 'x':
    case '*':
        cout << multi(a, b);
        break;
    case '/':
    case ':':
        cout << division(a, b);
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

    cin >> a;
    cin >> op;
    cin >> b;

    calculadora(a, op, b);
}