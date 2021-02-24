//Desenvolva um algoritmo, que indique qual o montante de electricidade a pagar. Para tal, deve ser pedido, o preço do KWh e a quantidade de KWhs consumidos

#include <iostream>

using namespace std;

int main(){
    
    int preco;
    int quantidade;

    cout << "Digite o preco: ";
    cin >> preco;

    cout << "Digite a quantidade: ";
    cin >> quantidade;

    int montante_pagar = preco * quantidade;
    cout << "Montante a pagar: " << quantidade << endl;

}