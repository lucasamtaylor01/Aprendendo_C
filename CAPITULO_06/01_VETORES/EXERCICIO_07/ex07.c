#include <stdio.h>

int main() {
  int vec[10], i;
  int maior, menor;

  for (i = 0; i < 10; i++) {
    printf("Insira o valor para vec[%d]: ", i);
    scanf("%d", &vec[i]);
  }

  maior = vec[0];
  menor = vec[0];

  printf("\nOs valores pares inseridos são: \n");
  for (i = 1; i < 10; i++) {
    if (vec[i] < menor) {
      menor = vec[i];
    }
    if (vec[i] > maior) {
      maior = vec[i];
    }
  }
  printf("Maior: %d\n", maior);
  printf("Menor: %d\n", menor);

  return 0;
}
