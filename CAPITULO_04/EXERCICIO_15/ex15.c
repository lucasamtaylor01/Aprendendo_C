#include <math.h>
#include <stdio.h>

int main() {
  double a, b, c;
  printf("Vamos calcular as raízes da equação de segundo grau: ax^2 + bx + c "
         "=0.\n");
  printf("Insira o valor de a: ");
  scanf("%lf", &a);
  if (a == 0) {
    printf("Se a=0, a equação não é uma equação de segundo grau.\n");
  } else {
    printf("Insira o valor de b: ");
    scanf("%lf", &b);

    printf("Insira o valor de c: ");
    scanf("%lf", &c);

    double delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
      printf("Não existem raízes reais.\n");
    } else {
      double x1 = (-1 * b + sqrt(delta)) / (2 * a);
      double x2 = (-1 * b - sqrt(delta)) / (2 * a);

      if (delta > 0) {
        printf("\nExistem duas raízes reais: %.2lf e %.2lf.\n", x1, x2);
      } else {
        printf("\nExistem uma única raíz: %.2lf\n", x1);
      }
    }
  }
  return 0;
}
