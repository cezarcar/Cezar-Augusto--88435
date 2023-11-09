#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale(LC_ALL,"portuguese");
    float valorProduto;
    float desconto;
    char diaSemana;

    printf("Digite o valor do Produto: R$ ");
    scanf("%f", &valorProduto);

    printf("Digite o dia da semana (D para dia de semana, S para fim de semana): ");
    scanf(" %c", &diaSemana);

    if (valorProduto > 100) {
        if (diaSemana == 'D' || diaSemana == 'd') {
            desconto = valorProduto * 0.1;
            printf("Desconto : R$ %.2f\n", desconto);
        } else if (diaSemana == 'S' || diaSemana == 's') {
            desconto = valorProduto* 0.15;
            printf("Desconto: R$ %.2f\n", desconto);
        } else {
            printf("Dia da semana inválido!\n");
        }
    } else {
        printf("Valor do Produto nao atende ao valor minimo para desconto.\n");
    }

    return 0;
}