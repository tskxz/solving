typedef struct PESSOA {
    char nome[100];
    int idade;
    float altura;
} pessoa;

void preencher(pessoa &p);
void imprimir(pessoa p);
