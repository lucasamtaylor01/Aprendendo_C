#include <stdio.h>

int main() {
  int contador, i;

  contador = 0;
  i = 1;
  while (contador < 5) {
    if (i % 3 == 0) {
      printf("%d\n", i);
      contador++;
    }
    i++;
  }
  return 0;
}
