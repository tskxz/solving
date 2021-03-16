#include<stdio.h>
#include<string.h>

void main(){
    char S1[100], S2[100];
    int i,j,c=0;
    printf("digite a string S1\n");
    gets(S1);
    printf("digite a string S2\n");
    gets(S2);
    if(strlen(S1)<=strlen(S2)){
        printf("S2 nao he substring de S1\n");
    }else{
        for(i=0;i<strlen(S1);i++){
            if(S2[0]==S1[i]){
                for(j=0;j<strlen(S2)-1;j++){
                    if(S2[j]==S1[i++])
                        c++;
                }
            }
            if(c==strlen(S2)){
                break;
        }
    }
    if(c==strlen(S2))
        printf("S2 he string de S1\n");
    else
        printf("S2 nao he string de s1\n");
    }
}