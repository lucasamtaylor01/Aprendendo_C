// CONVERSÃO DE KM/H -> M/S

#include <stdio.h>

int main(){
    float kmh, ms;
    printf("Insira a medida em km/h: ");
    scanf("%f", &kmh);
    ms = kmh/3.6;

    printf("%.2f km/h é equivalente a %.2f m/s\n", kmh, ms);

    return 0;
}