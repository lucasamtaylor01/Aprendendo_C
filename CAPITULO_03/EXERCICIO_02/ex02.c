#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    printf("Insira um número: ");
    scanf("%d", &x);

    float quinta_parte;
    quinta_parte = x /5;
    printf("\nA quinta parte de %d é %f.2.\n", x, quinta_parte);
    return 0;
}