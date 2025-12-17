// LER UM INTEIRO E RETORNAR SEU SUCESSOR E ANTECESSOR

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, sucessor, antecessor;
    printf("Insira um número: ");
    scanf("%d", &x);

    sucessor = x+1;
    antecessor = x-1;
    printf("O sucessor é: %d\n", sucessor);
    printf("O antecessor é: %d\n", antecessor);

    return 0;
}