// DIVISÃO DE QUANTIDA

#include <stdio.h>

int main(){
    float total, primeiro_ganhador, segundo_ganhador, terceiro_ganhador;
    
    total = 780000.00;
    primeiro_ganhador = total * 0.42;
    segundo_ganhador = total * 0.36;
    terceiro_ganhador = total * (1-(0.36+0.42));

    printf("TABELA DE PRÊMIOS\n\n");
    printf("PRIMEIRO GANHADOR: R$ %.2f\n", primeiro_ganhador);
    printf("SEGUNDO GANHADOR: R$ %.2f\n", segundo_ganhador);
    printf("TERCEIRO GANHADOR: R$ %.2f\n", terceiro_ganhador);

    return 0;
}