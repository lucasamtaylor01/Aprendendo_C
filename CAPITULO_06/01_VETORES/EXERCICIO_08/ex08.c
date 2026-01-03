#include <stdio.h>

int main() {
  int vec[10], i;
  int contador, soma;

  contador = 0;
  soma = 0;

  for (i = 0; i < 10; i++) {
    printf("Insira o valor para vec[%d]: ", i);
    scanf("%d", &vec[i]);
  }

  for (i = 1; i < 10; i++) {
    if (vec[i] >= 0) {
      soma = soma + vec[i];
    } else {
      contador++;
    }
  }

  printf("Foram inseridos %d números negativos.\n", contador);
  printf("A soma de todos os positivos é: %d.\n", soma);
}
