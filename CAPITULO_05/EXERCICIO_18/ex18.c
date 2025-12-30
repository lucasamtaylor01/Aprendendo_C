#include <math.h>
#include <stdio.h>

int main() {
  int numero, divisores;

  printf("Insira um número: ");
  scanf("%d", &numero);

  divisores = 2;

  while (divisores <= numero) {
    if (divisores == numero) {
      printf("O número %d é primo\n", numero);
    } else {
      if (numero % divisores == 0) {
        printf("O número %d não é primo\n", numero);
        break;
      }
    }
    divisores++;
  }

  return 0;
}
