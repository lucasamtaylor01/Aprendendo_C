#include <stdio.h>

int main() {
  int vec[8], i, numero;
  int x, y;
  for (i = 0; i < 8; i++) {
    printf("Insira o valor de vec[%d]: ", i);
    scanf("%d", &numero);
    vec[i] = numero;
  }

  printf("Insira o valor da posição X: ");
  scanf("%d", &x);

  printf("Insira o valor da posição Y: ");
  scanf("%d", &y);

  if (x >= 0 && x < 8 && y >= 0 && y < 8) {
    printf("O valor na posição %d é: %d\n", x, vec[x]);
    printf("O valor na posição %d é: %d\n", y, vec[y]);
  } else {
    printf("Um dos valores de posição é inválido.\n");
  }
  return 0;
}
