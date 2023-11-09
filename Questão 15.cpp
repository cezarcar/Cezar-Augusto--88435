#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float valor, resultado;
    while (1) {
        printf("\nEscolha uma op��o de conversao:\n");
        printf("1. Converter quil�metros para milhas\n");
        printf("2. Converter Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo do programa...\n");
                return 0;
            case 1:
                printf("Digite a dist�ncia em quil�metros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371;
                printf("%.2f quil�metros � igual a %.2f milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9 / 5) + 32;
                printf("%.2f graus Celsius � igual a %.2f graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Op��o inv�lida! Escolha uma op��o v�lida.\n");
                break;
        }
    }
}
