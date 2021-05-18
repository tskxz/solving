typedef struct NUMERO {
    int inteiro;
    double real;
    
    void preencher();
    void imprimir();
    void copiar(struct NUMERO n);
    int comparar(struct NUMERO n);
    void add(struct NUMERO n1, struct NUMERO n2);
    void sub(struct NUMERO n1, struct NUMERO n2);
    
    NUMERO();
    NUMERO(double _real);
    
} numero;