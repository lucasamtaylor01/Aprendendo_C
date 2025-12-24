#include <stdio.h>

int main() {
  int idade;
  printf("Insira o valor da idade do aluno: ");
  scanf("%d", &idade);

  printf("A classificação do aluno de acordo com sua idade é:\n");

  if (idade >= 5 && idade <= 7) {
    printf("Infantil A.\n");
  } else if (idade >= 8 && idade <= 10) {
    printf("Infantil B.\n");
  } else if (idade >= 11 && idade <= 13) {
    printf("Juvenial A.\n");
  } else if (idade >= 14 && idade <= 17) {
    printf("Juvenil B.\n");
  } else if (idade >= 18) {
    printf("Sênior.\n");
  } else {
    printf("Idade sem classificação.\n");
  }

  return 0;
}
