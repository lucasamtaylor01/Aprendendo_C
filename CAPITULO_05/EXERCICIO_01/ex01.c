#include <stdio.h>

int main() {
  int n, j;
  printf("Insira um número: ");
  scanf("%d", &n);

  for (j = 0; j <= n; j++) {
    printf("%d\n", j);
  }
  return 0;
}
