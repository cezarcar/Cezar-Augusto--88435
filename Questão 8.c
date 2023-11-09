#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    printf("Digite um numero inteiro : ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("insira um numero inteiro positivo.\n");
        
    }

    while (numero >= 0) {
        switch (numero) {
            case 0:
                printf("0!\n");
                break;
            case 1:
                printf("1!\n");
                break;
            default:
                printf("%d...\n", numero);
                break;
        }
        
    }

    return 0;
}