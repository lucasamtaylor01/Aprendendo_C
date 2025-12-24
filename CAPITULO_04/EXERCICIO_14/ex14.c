#include <stdio.h>

int main() {
  int numero;
  printf("Selecione um número: ");
  scanf("%d", &numero);

  if (numero % 3 == 0 && numero % 5 == 0) {
    printf("%d é dividido por 3 e por 5.\n", numero);
  } else if (numero % 3 == 0) {
    printf("%d é dividido por 3.\n", numero);
  } else if (numero % 5 == 0) {
    printf("%d é dividido por 5.\n", numero);
  } else {
    printf("%d é não é dividido por 3, nem por 5.\n", numero);
  }
  return 0;
}
