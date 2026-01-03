#include <stdio.h>

int main() {
  int vec[10], i;

  for (i = 0; i < 10; i++) {
    printf("Insira o valor para vec[%d]: ", i);
    scanf("%d", &vec[i]);
  }

  printf("Os valores pares inseridos são: \n");
  for (i = 0; i < 10; i++) {
    if ((vec[i] % 2) == 0) {
      printf("%d ", vec[i]);
    }
  }
  printf("\n");
  return 0;
}
