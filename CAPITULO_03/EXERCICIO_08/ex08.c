#include <stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("Insira o valor da temperatura em celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius*(9.0/5.0) + 32;
    
    //OBSERVAÇÃO: Se eu colocar (9/5) ao invés de (9.0/5.0), C vai retornar o int.    
  

    printf("%.2f °C é equivalente a %.2f °F\n", celsius, fahrenheit);

    return 0;
}