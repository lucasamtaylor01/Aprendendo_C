#include <stdio.h>

#define PI 3.14

int main(){
    float graus, radianos;
    printf("Insira o valor em graus: ");
    scanf("%f", &graus);    

    radianos = graus * PI / 180;

    printf("Temos que o valor de %.2f está associado a %.2f radianos.\n", graus, radianos);
    return 0;
}