#include <stdio.h>

int main() {
  int i = 0;
  printf("Os múltiplos de 3 e 5 até 1000 são:\n");
  while (i <= 1000) {
    if ((i % 5) == 0 || (i % 3) == 0) {
      printf("%d\n", i);
    }
    i++;
  }
  return 0;
}
