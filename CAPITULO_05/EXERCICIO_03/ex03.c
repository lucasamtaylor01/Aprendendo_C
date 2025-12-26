#include <stdio.h>

int main() {
  int n, j;
  printf("Insira um número: ");
  scanf("%d", &n);

  for (j = 0; j <= n; j++) {
    if (j % 2 != 0) {
      printf("%d\n", j);
    }
  }
  return 0;
}
