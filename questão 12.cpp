#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidadeNotas, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNotas);

    if (quantidadeNotas <= 0) {
        printf("Quantidade de notas inv�lida.\n");
        return 1;
    }

    for (i = 1; i <= quantidadeNotas; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidadeNotas;
    printf("A m�dia das notas �: %.2f\n", media);

    return 0;
}
