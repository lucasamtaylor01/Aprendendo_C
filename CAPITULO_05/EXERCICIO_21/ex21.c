#include <stdio.h>

int main() {
  int contador, n, numero, maior, contador_maior;
  printf("Insira a quantidade de números para ser analisada: ");
  scanf("%d", &n);

  printf("Insira um número: ");
  scanf("%d", &numero);

  maior = numero;
  contador = 1;
  contador_maior = 1;

  while (contador < n) {
    printf("Insira um número: ");
    scanf("%d", &numero);
    if (numero == maior) {
      contador_maior++;
    }

    if (numero > maior) {
      contador_maior = 1;
      maior = numero;
    }

    contador++;
  }
  if (contador_maior == 1) {
    printf("O maior número inserido foi: %d. E ele apareceu %d vez.\n", numero,
           contador_maior);
  } else {
    printf("O maior número inserido foi: %d. E ele apareceu %d vezes.\n",
           numero, contador_maior);
  }
  return 0;
}
