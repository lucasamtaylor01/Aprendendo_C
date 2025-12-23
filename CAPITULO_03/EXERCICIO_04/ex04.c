#include <stdio.h>
int main(){
    float x,y,z, media;

    printf("Insira o primeiro número real: ");
    scanf("%f", &x);

    printf("Insira o segundo número real: ");
    scanf("%f", &y);

    printf("Insira o terceiro número real: ");
    scanf("%f", &z);

    media = (x+y+z)/3;

    printf("A média aritmética dos valores inseridos é dada por: %f\n.", media);

    return 0;   
}
