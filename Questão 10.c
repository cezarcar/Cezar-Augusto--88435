#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operaçao desejada (+ ou -): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da adicao e: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtracao e: %.2f\n", resultado);
            break;
        default:
            printf("Operaçao invalida!\n");
            break;
    }

    return 0;
}