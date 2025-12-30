#include <stdio.h>

int main() {
  int contador = 2;
  int numero, c;
  int a = 0;
  int b = 1;

  printf("Insira um número: ");
  scanf("%d", &numero);

  if (numero <= 0) {
    printf("Insira um número maior que 0");
  } else if (numero == 1) {
    printf("%d\n", a);
  } else if (numero == 2) {
    printf("%d\n", b);
  } else {
    printf("%d\n", a);
    printf("%d\n", b);
    while (contador <= numero) {
      c = a + b;
      printf("%d\n", c);
      a = b;
      b = c;
      contador++;
    }
  }
}
