// DESCOBRINDO O ANO DE NASCIMENTO DA PESSOA 
// RELEITURA - VÁLIDO SOMENTE EM 16/12/2025


#include <stdio.h>

int main(){
    int idade;
    int ano, mes, dia;
    int dia_hoje=16, mes_hoje=12, ano_hoje=2025;

    printf("Insira o ano do seu nascimento: ");
    scanf("%d", &dia);
    printf("Insira o mês do seu nascimento: ");
    scanf("%d", &mes);
    printf("Insira o dia do seu nascimento: ");
    scanf("%d", &ano);

    idade = ano_hoje - ano;

    if (mes_hoje == mes && dia_hoje < dia){
        idade --;
    }

    printf("Você tem %d anos.\n", idade);
    
    return 0;
}