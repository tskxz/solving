/*
Pretende-se criar um sistema de compra e venda de artigos baseados num POS. Para isso foi criado aseguinte descrição de funcionamento
1. É apresentado ao cliente uma lista dos artigos -  com o respetivo preço - a comprar.
Existem apenas 5 artigos: 1 - Caderno; 2 - Caneta; 3 - Borracha; 4 - Lápis; 5 - Corrector

2. O cliente escolhe qual o artigo, indicando o seu número, indicando também qual a quantidade desejada.

3. O sistema devolver qual o preço a pagar.

NOTAS: O sistema deve validar todas as entradas de dados. 
Se o valor colocado pelo cliente não for válido,deve incluir uma mensagem de erro e terminar o processamento.
*/


#include <iostream>

int main(){
    
    std::cout << "Lista de Artigos" << std::endl;
    
    std::cout << "1 - Caderno (0.40$)" << std::endl;
    std::cout << "2 - Caneta (0.25$)" << std::endl;
    std::cout << "3 - Borracha (0.25$)" << std::endl;
    std::cout << "4 - Lapis (0.20$)" << std::endl;
    std::cout << "5 - Corretor" << std::endl;

    int num_artigo;
    int quantidade;
    double preco;

    std::cout << "Escolha o artigo introduzindo o numero do seu respetivo artigo: ";
    std::cin >> num_artigo;
    
    if(num_artigo < 0 || num_artigo > 5){
        std::cout << "Exitem apenas 1-5 artigos!";
        return -1;
    }

    switch (num_artigo)
    {
    case 1:
        std::cout << "Introduze a quantidade de cadernos: ";
        std::cin >> quantidade;
        preco = quantidade * 0.40;
        std::cout << "Total a pagar: " << preco << "$" << std::endl;
        break;
    case 2:
        std::cout << "Introduze a quantidade de canetas: ";
        std::cin >> quantidade;
        preco = quantidade * 0.25;
        std::cout << "Total a pagar: " << preco << "$" << std::endl;
        break;
    case 3:
        std::cout << "Introduze a quantidade de borrachas: ";
        std::cin >> quantidade;
        preco = quantidade * 0.25;
        std::cout << "Total a pagar " << preco << "$" << std::endl;
        break;
    case 4:
        std::cout << "Introduze a quantidade de lapis: ";
        std::cin >> quantidade;
        preco = quantidade * 0.20;
        std::cout << "Total a pagar " << preco << "$" << std::endl;
        break;
    case 5:
        std::cout << "Introduze a quantidade de corretores: ";
        std::cin >> quantidade;
        preco = quantidade * 0.65;
        std::cout << "Total a pagar: " << preco << "$" << std::endl;
        break;
    default:
        std::cout << "Erro! Falha ao tentar realizar a compra.";
        break;
    }
    
}