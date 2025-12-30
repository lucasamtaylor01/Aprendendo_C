#include <math.h>
#include <stdio.h>

int main() {
  int i, n;
  double harmonico;

  i = 1;
  harmonico = 0;
  printf("Insira o valor de n: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Número inválido, insira um valor positivo\n");
  } else {
    while (i <= n) {
      harmonico = harmonico + (1.0 / i);
      i++;
    }

    printf("Harmônico: %.3lf\n", harmonico);
  }
}
