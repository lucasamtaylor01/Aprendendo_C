#include <stdio.h>

int main() {
  int vec[6], i, numero;

  for (i = 0; i < 6; i++) {
    printf("Insira um número: ");
    scanf("%d", &numero);
    vec[i] = numero;
  }

  printf("Os números inseridos na ordem inversa foram: \n");
  for (i = 5; i >= 0; i--) {
    printf("%d ", vec[i]);
  }
  printf("\n");
  return 0;
}
