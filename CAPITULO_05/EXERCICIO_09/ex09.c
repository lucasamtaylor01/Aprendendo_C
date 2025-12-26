#include <stdio.h>

int main() {
  int maior, menor, numero, contador;

  contador = 1;

  printf("Insira um número: ");
  scanf("%d", &numero);

  maior = numero;
  menor = numero;

  while (contador < 10) {
    printf("Insira um número: ");
    scanf("%d", &numero);

    if (numero < menor) {
      menor = numero;
    }

    if (numero > maior) {
      maior = numero;
    }
    contador++;
  }
  printf("O maior número foi: %d\n", maior);
  printf("O menor número foi: %d\n", menor);
  return 0;
}
