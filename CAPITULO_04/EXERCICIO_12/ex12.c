#include <stdio.h>

int main() {
  int dia_da_semana;
  printf("Insira o número de 1-7: ");
  scanf("%d", &dia_da_semana);

  switch (dia_da_semana) {
  case 1:
    printf("Domingo.\n");
    break;
  case 2:
    printf("Segunda-feira.\n");
    break;
  case 3:
    printf("Terça-feira.\n");
    break;
  case 4:
    printf("Quarta-feira.\n");
    break;
  case 5:
    printf("Quinta-feira.\n");
    break;
  case 6:
    printf("Sexta-feira.\n");
    break;
  case 7:
    printf("Sábado.\n");
    break;
  default:
    printf("Inválido.\n");
  }

  return 0;
}
