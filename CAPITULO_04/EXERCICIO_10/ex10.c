#include <stdio.h>

int main() {
  double x, y, z;
  int opcao;
  double geometrica, ponderada, harmonica, artimetica;

  printf("Insira o primeiro número: ");
  scanf("%lf", &x);
  printf("Insira o segundo número: ");
  scanf("%lf", &y);
  printf("Insira o terceiro número: ");
  scanf("%lf", &z);

  printf(
      "\nInsira a média a ser calculada:\n[1] GEOMETRICA\n[2] PONDERADA\n[3] "
      "HARMONICA\n[4] ARITMETICA\n");

  printf("Selecione uma opção: ");
  scanf("%d", &opcao);

  geometrica = x * y * z;
  ponderada = (x + 2 * y + 3 * z) / 6;
  harmonica = 1 / ((1 / x) + (1 / y) + (1 / z));
  artimetica = (x + y + z) / 3;

  if (opcao == 1) {
    printf("A média geométrica é %.2lf\n", geometrica);
  } else if (opcao == 2) {
    printf("A média ponderada é %.2lf\n", ponderada);
  } else if (opcao == 3) {
    printf("A média harmônica é %.2lf\n", harmonica);
  } else if (opcao == 4) {
    printf("A média artimética é %.2lf\n", artimetica);
  } else {
    printf("Opção inválida\n");
  }

  return 0;
}
