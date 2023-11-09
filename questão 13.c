#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 == numero2) {
        printf("Os numeros sao iguais.\n");
    } else if (numero1 > numero2) {
        printf("O primeiro número (%d) é maior que o segundo número (%d).\n", numero1, numero2);
    } else {
        printf("O segundo número (%d) é maior que o primeiro número (%d).\n", numero2, numero1);
    }

    return 0;
}