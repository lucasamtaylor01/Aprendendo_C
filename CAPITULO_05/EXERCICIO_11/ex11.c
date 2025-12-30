#include <stdio.h>

int main() {
  int numero;
  int divisor = 1;

  printf("Insira um número: ");
  scanf("%d", &numero);

  printf("Os divisores são: ");
  while (divisor <= numero) {
    if (numero % divisor == 0) {
      printf("%d ", divisor);
    }
    divisor++;
  }
  printf("\n");
  return 0;
}
