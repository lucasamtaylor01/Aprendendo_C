#include <stdio.h>

int main(){
    double altura, peso_ideial;
    char genero;

    printf("Insira a altura: ");
    scanf("%lf", &altura);
    printf("Selecione seu gênero:\n[h] homem\n[f] mulher\nInsira o gênero: ");
    getchar();
    scanf("%c", &genero);

    if (genero == 'h'){
        peso_ideial = (72.7 * altura) - 58;
        printf("O peso ideal é %.2lf\n", peso_ideial);
    }else if (genero == 'f'){
        peso_ideial = (62.1 * altura) - 44.7;
        printf("O peso ideal é %.2lf\n", peso_ideial);
    }else{
        printf("Erro.\n");
    }
    
    return 0;
}