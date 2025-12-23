#include <stdio.h>

int main(){
    int x, y, z, soma;

    printf("Insira o primeiro inteiro: ");
    scanf("%d", &x);

    printf("Insira o segundo inteiro: ");
    scanf("%d", &y);

    printf("Insira o terceiro inteiro: ");
    scanf("%d", &z);

    soma = x+y+z;

    printf("A soma dos inteiros é: %d\n", soma);
    return 0;
}