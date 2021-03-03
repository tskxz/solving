

# Solving
## Resolução de vários exercícios e algoritmos em linguagem C/C++

 - [Módulo 1](#primeiro-modulo)
 - [Módulo 2](#segundo-modulo)
 - [Módulo 3](#terceiro-modulo)
 - [Módulo 4](#quarto-modulo)
 
 

### Primeiro Modulo
Introdução á algoritmia e fluxogramas, problemas de algoritmia em C++

 1. [Ficha Prática](https://github.com/tanjilk/solving/blob/master/m%C3%B3dulo%201/Ficha%20pra%CC%81tica%2001.pdf)
 2. [Ficha Prática](https://github.com/tanjilk/solving/blob/master/m%C3%B3dulo%201/Ficha%20pra%CC%81tica%2002.pdf)
 3. [Ficha Prática](https://github.com/tanjilk/solving/blob/master/m%C3%B3dulo%201/Ficha%20pra%CC%81tica%2003.pdf)

### Segundo Modulo
Introdução em linguagem C/C++ com as condições IF  ELSE IF ELSE e ciclos FOR WHILE DO WHILE
  - [Ficha Avaliação](https://github.com/tanjilk/solving/blob/master/m%C3%B3dulo%202/Teste01.pdf)
  - [Resolução](https://github.com/tanjilk/solving/blob/master/m%C3%B3dulo%202/sistema_compras_vendas.cpp)  
  
Sistema de Compras e Vendas
```cpp
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
```
### Terceiro Modulo
Funções void e funções com tipos de dados
Algoritmos que possam ser implementadas nos próximos exercícios
Descobrir números primos, encontrar divisores etc...

#### Numeros Primos
Exemplo de um exercício seguinte
Escrever uma função em C++ que imprima os N primeiros números primos. O valor de N tem que ser maior que 10 e menor que 100. Qualquer valor fora deste intervalo deve imprimir o texto "Não é possivel realizar essa operação"
```cpp
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
```
Verificar se é primo ou não
```cpp
	int num;
    int c = 0;
    
    std::cout << "Introduze o numero: ";
    std::cin >> num;

    for(int i = 1; i<=num; i++){
        if(num % i == 0){
            c++;
        }
    }
    if(c == 2){
        std::cout << "É primo";
    } else {
        std::cout << "Nao é primo";
    }
```

Verificar se é primo ou não utilizando um ciclo while
```cpp
int primo(int num){
    int n;
    for(int i = 1; i<=num; i++){
        if(num % i == 0){
            n++;
        }
    }
    if(n == 2){
        return 1;
    } else {
        return -1;
    }
}
```
Mostrar primeiros numeros primos ate 50
```cpp
for(int i = 1; i<=50; i++){
        int divisor = 2;
        while(i % divisor != 0){
            divisor++;
        }
        if(divisor == i){
            std::cout << i << std::endl;
        }
    }    
```
Imprimir 10 primeiros multiplos de 5
```cpp
for(int i = 1; i<=10; i++){
        cout << i * 5;
    }
```

Dado um número, indicar os divisores de um número
```cpp
int num;
std::cin >> num;
for(int i = 1; i<=num; i++){
	if(num % i == 0){
		std::cout << i << ", ";
    }
}
```

### Quarto Modulo
Arrays, Vetores, Vetores multidimensionais e Matrizes

