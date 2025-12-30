#include <stdio.h>

int main() {
  int i, contador, contador_linhas, linhas;

  printf("Insira o número de linhas ");
  scanf("%d", &linhas);

  contador = 1;
  contador_linhas = 1;
  i = 1;

  while (contador_linhas < linhas) {
    if (contador == contador_linhas) {
      printf("%d\n", i);
      contador = 1;
      contador_linhas++;
    } else {
      printf("%d ", i);
      contador++;
    }
    i++;
  }
  return 0;
}
