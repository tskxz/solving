// Sendo  dado  o  número  de  alunos  de  uma  turma  e  o  número  de rapazes, elaborar um algoritmo que calcule a percentagem de rapazes e de raparigas.

#include <iostream>

int main(){

    int num_rapazes;
    int num_alunos;

    std::cout << "Introduze o numero de alunos: ";
    std::cin >> num_alunos;

    std::cout << "Introduze o numero de alunos rapazes: ";
    std::cin >> num_rapazes;

    int num_raparigas = num_alunos - num_rapazes;

    double percentagem_rapazes;
    double percentagem_raparigas;

    percentagem_rapazes = (num_rapazes / num_alunos) * 100;
    percentagem_raparigas = (num_raparigas / num_alunos) * 100;

    std::cout << "Percentagem de numero de rapazes: " << percentagem_rapazes << std::endl;
    std::cout << "Percentagem de numero de raparigas: " << percentagem_raparigas << std::endl;



}