// DESLOCAMENTO DE BITS
// https://en.wikipedia.org/wiki/Bitwise_operations_in_C

#include <stdio.h>

int main(){
    unsigned char numero, dobro, metade;
    printf("Insira o número inteiro: ");
    scanf("%hhd", &numero);

    dobro = numero << 1;
    metade = numero >> 1;
    
    printf("O dobro de %d é %d\n", numero, dobro);
    printf("A metade de %d é %d\n", numero, metade);

    return 0;
} 