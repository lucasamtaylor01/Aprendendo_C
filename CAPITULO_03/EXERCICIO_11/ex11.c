#include <stdio.h>
#include <math.h>

double PI = 3.14;

int main(){
    double raio, raio2, area;
    printf("Insira o valor do raio: ");
    scanf("%lf", &raio);
    raio2 = pow(raio, 2.0);
    area = PI*raio2;
    printf("A área do círculo é dada por: %.2lf\n", area);
    return 0;
}