#include <stdio.h>

int main() {
  int contador = 0;
  int numero;
  int soma = 0;
  float media;

  while (contador < 10) {
    printf("Insira um número: ");
    scanf("%d", &numero);

    if (numero < 0) {
      printf("Insira somente números positivos\n");
    } else {
      soma = soma + numero;
      contador++;
    }
  }

  media = (float)soma / 10.0;
  printf("MÉDIA: %.2f\n", media);
  return 0;
}
