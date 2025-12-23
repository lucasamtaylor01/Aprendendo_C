#include <stdio.h>

int main(){
    double salario, prestacao;

    printf("Insira o valor do salário: ");
    scanf("%lf", &salario);

    printf("Insira o valor da prestação: ");
    scanf("%lf", &prestacao);

    if ((salario*1.2) < prestacao){
        printf("Empréstimo não concedido.\n");
    }else{
        printf("Empréstimo concedido.\n");
    }

    return 0;
}