#include <stdio.h>

int main(){
    unsigned char numero, complemento;
    printf("Insira o número inteiro: ");
    scanf("%hhd", &numero);

    complemento = ~numero;

    printf("O complemento de %d é %d\n", numero, complemento);
    return 0;
}