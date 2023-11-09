#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i, primo = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Numero nao primo\n");
        return 0;
    }

    for (i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            primo = 1;
            break;
        }
    }

    switch (primo) {
        case 0:
            printf("Numero é primo\n");
            break;
        default:
            printf("não é primo\n");
            break;
    }

    return 0;
}