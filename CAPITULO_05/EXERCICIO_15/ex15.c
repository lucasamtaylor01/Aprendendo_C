#include <stdio.h>

int main() {
  int numero;
  int menor, maior;
  printf("Insira um número: ");
  scanf("%d", &numero);

  menor = numero;
  maior = numero;

  while (1) {
    printf("Insira um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
      printf("Finalizando o loop\n");
      break;
    } else {
      if (numero < menor) {
        menor = numero;
      }
      if (numero > maior) {
        maior = numero;
      }
    }
  }
  printf("Menor número: %d\n", menor);
  printf("Maior número: %d\n", maior);

  return 0;
}
