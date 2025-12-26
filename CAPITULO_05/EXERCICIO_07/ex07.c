#include <stdio.h>

int main() {
  int contador = 0;
  int numero;
  int soma = 0;

  while (contador < 10) {
    printf("Insira um número: ");
    scanf("%d", &numero);

    soma = soma + numero;
    contador++;
  }

  printf("SOMA: %d\n", soma);
  return 0;
}
