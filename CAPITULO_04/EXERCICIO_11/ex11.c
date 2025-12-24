#include <stdio.h>

int main() {
  int mes;
  printf("Insira o valor do mês: ");
  scanf("%d", &mes);

  if (mes == 1) {
    printf("JANEIRO\n");
  } else if (mes == 2) {
    printf("FEVEREIRO\n");
  } else if (mes == 3) {
    printf("MARÇO\n");
  } else if (mes == 4) {
    printf("ABRIL\n");
  } else if (mes == 5) {
    printf("MAIO\n");
  } else if (mes == 6) {
    printf("JUNHO\n");
  } else if (mes == 7) {
    printf("JULHO\n");
  } else if (mes == 8) {
    printf("AGOSTO\n");
  } else if (mes == 9) {
    printf("SETEMBRO\n");
  } else if (mes == 10) {
    printf("OUTUBRO\n");
  } else if (mes == 11) {
    printf("NOVEMBRO\n");
  } else if (mes == 12) {
    printf("DEZEMBRO\n");
  } else {
    printf("Número inválido\n");
  }

  return 0;
}
