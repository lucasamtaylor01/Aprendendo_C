#include <stdio.h>

int main() {
  int soma, contador, i;

  soma = 0;
  contador = 0;
  i = 0;

  while (contador < 50) {
    if (i % 2 == 0) {
      soma += i;
      contador++;
    }

    i++;
  }
  printf("Soma: %d\n", soma);
  return 0;
}
