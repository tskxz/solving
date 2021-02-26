// Construa um algoritmo que converta um dado valor em horas, minutos e segundos em segundos.


#include <iostream>
int main(){
    
    int horas;
    int minutos;
    int segundos;

    std::cout << "Introduze as horas: ";
    std::cin >> horas;

    std::cout << "Introduze os minutos: ";
    std::cin >> minutos;

    std::cout << "Introduze os segundos: ";
    std::cin >> segundos;

    int horas_segundos = horas * 60 * 60;
    int minutos_segundos = minutos * 60;
    
    segundos = horas_segundos + minutos_segundos;

    std::cout << "Segundos: " << segundos << std::endl;
}