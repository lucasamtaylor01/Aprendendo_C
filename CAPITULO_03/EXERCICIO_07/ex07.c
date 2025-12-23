// COTAÇÃO DE 16/12/2025

#include <stdio.h>

int main(){
    float real, dolar;
    printf("Insira o valor em reais (R$): ");
    scanf("%f", &real);
    dolar = real/5.51;

    printf("R$ %.2f é equivalente a U$ %.2f\n", real, dolar);

    return 0;
}