#include <stdio.h>

int main() {
  int opcao;
  double primeiro_numero, segundo_numero;

  printf("SELECIONE UMA OPERAÇÃO\n[1] SOMA\n[2] SUBTRAÇÃO\n[3] "
         "MULTIPLICAÇÃO\n[4] DIVISÃO\n");
  printf("Opção selecionada: ");
  scanf("%d", &opcao);

  printf("\nSelecione o primeiro número: ");
  scanf("%lf", &primeiro_numero);

  printf("Selecione o segundo número: ");
  scanf("%lf", &segundo_numero);

  if (opcao == 1) {
    double soma = primeiro_numero + segundo_numero;
    printf("%lf + %lf = %lf\n", primeiro_numero, segundo_numero, soma);
  } else if (opcao == 2) {
    double subtracao = primeiro_numero - segundo_numero;
    printf("%lf - %lf = %lf\n", primeiro_numero, segundo_numero, subtracao);
  } else if (opcao == 3) {
    double multiplicacao = primeiro_numero * segundo_numero;
    printf("%lf * %lf = %lf\n", primeiro_numero, segundo_numero, multiplicacao);
  } else if (opcao == 4) {
    if (segundo_numero == 0) {
      printf("Não existe divisão por zero.\n");
    } else {
      double divisao = primeiro_numero / segundo_numero;
      printf("%lf / %lf = %lf\n", primeiro_numero, segundo_numero, divisao);
    }
  } else {
    printf("Opção inválida.\n");
  }

  return 0;
}
