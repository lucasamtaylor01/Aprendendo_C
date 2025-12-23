#include <stdio.h>

int main(){
    int primeiro_numero, segundo_numero;
    printf("Insira o primeiro número: ");
    scanf("%d", &primeiro_numero);

    printf("Insira o segundo número: ");
    scanf("%d", &segundo_numero);

    if (primeiro_numero > segundo_numero){
        printf("O maior número é %d\n", primeiro_numero);
    }
    else{
        printf("O maior número é %d\n", segundo_numero);
    }
    
    return 0;
}