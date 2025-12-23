#include <stdio.h>

int main(){
    unsigned char primeiro_numero, segundo_numero, operacao;

    printf("Insira o primeiro número: ");
    scanf("%hhd", &primeiro_numero);
    printf("Insira o segundo número: ");
    scanf("%hhd", &segundo_numero);    

    printf("\nOPERAÇÃO OU EXCLUSIVO\n");
    operacao = primeiro_numero ^ segundo_numero;
    printf("Resultado da operação: %d\n", operacao);
    
    printf("\nOPERAÇÃO OU BIT A BIT\n");
    operacao = primeiro_numero | segundo_numero;
    printf("Resultado da operação: %d\n", operacao);

    printf("\nOPERAÇÃO E BIT A BIT\n");
    operacao = primeiro_numero & segundo_numero;
    printf("Resultado da operação: %d\n", operacao);
    return 0;
}