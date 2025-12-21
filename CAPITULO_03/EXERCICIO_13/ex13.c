#include <stdio.h>
#include <math.h>

int main() {
    double primeiro_cateto, segundo_cateto, hipotenusa;

    printf("Insira o valor do primeiro cateto: ");
    scanf("%lf", &primeiro_cateto);

    printf("Insira o valor do segundo cateto: ");
    scanf("%lf", &segundo_cateto);

    hipotenusa = sqrt(pow(primeiro_cateto, 2.0) + pow(segundo_cateto, 2.0));

    printf("A hipotenusa para o triângulo de catetos %.2lf e %.2lf é %.2f\n",
           primeiro_cateto, segundo_cateto, hipotenusa);

    return 0;
}
