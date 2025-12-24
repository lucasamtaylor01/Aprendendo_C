#include <stdio.h>

int main() {
  double peso, altura;

  printf("Insira sua altura: ");
  scanf("%lf", &altura);
  printf("Insira seu peso: ");
  scanf("%lf", &peso);

  printf("De acordo com seu peso e altura, podemos classificar com: \n");

  if (altura < 1.20) {
    if (peso < 60) {
      printf("Classificação A.\n");
    } else if (peso >= 60 && peso <= 90) {
      printf("Classificação D\n");
    } else {
      printf("Classificação G\n");
    }
  } else if (altura >= 1.20 && altura <= 1.70) {
    if (peso < 60) {
      printf("Classificação B.\n");
    } else if (peso >= 60 && peso <= 90) {
      printf("Classificação E\n");
    } else {
      printf("Classificação H\n");
    }
  } else {
    if (peso < 60) {
      printf("Classificação C\n");
    } else if (peso >= 60 && peso <= 90) {
      printf("Classificação F\n");
    } else {
      printf("Classificação I\n");
    }
  }
}
