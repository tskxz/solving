// Crie uma função que utilizando um cicllo while, determine se um dado número é primo

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