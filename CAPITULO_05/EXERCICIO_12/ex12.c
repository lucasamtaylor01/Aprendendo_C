#include <stdio.h>

int main() {
  int numero;
  int divisor = 1;
  int soma = 0;
  printf("Insira um número: ");
  scanf("%d", &numero);

  printf("A soma dos divisores de %d é ", numero);
  while (divisor <= numero) {
    if (numero == divisor) {
      soma = soma + divisor;
      printf("%d=", divisor);
    } else {
      if (numero % divisor == 0) {
        printf("%d+", divisor);
        soma = soma + divisor;
      }
    }
    divisor++;
  }
  printf("%d \n", soma);
  return 0;
}
