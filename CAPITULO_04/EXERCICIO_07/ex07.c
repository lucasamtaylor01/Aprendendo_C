#include <stdio.h>

int main(){
    int numero_do_estado;
    double valor, novo_valor;

    printf("Insira o valor do produto: ");
    scanf("%lf", &valor);

    printf("SELECIONE O ESTADO:\n[1] MG\n[2] SP\n[3] RJ\n[4] MS\n");
    printf("Insira o valor do estado selecionado: ");
    scanf("%d", &numero_do_estado);

    if (numero_do_estado == 1){
        novo_valor = valor*(1.07);
        printf("\nO imposto em MG é 12%% \n");
    }else if (numero_do_estado == 2){
        novo_valor = valor*(1.12);
        printf("\nO imposto em SP é 12%% \n");
    }else if (numero_do_estado == 3){
        novo_valor = valor*(1.15);
        printf("\nO imposto em RJ é 15%% \n");
    }else if (numero_do_estado == 4){
        novo_valor = valor*(1.08);
        printf("\nO imposto em MS é 8%% \n");
    }else{
        printf("\nErro.\n");
    }

    printf("O valor do produto com imposto é %.2lf\n", novo_valor);
    
    
    return 0;
}