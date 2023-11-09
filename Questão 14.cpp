#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, totalNumeros, contadorPares = 0, contadorImpares = 0;
    float somaPares = 0, somaImpares = 0;
  int i;


    printf("Digite a quantidade de numeros a serem inseridos: ");
    scanf("%d", &totalNumeros);

    for ( i = 0; i < totalNumeros; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            contadorPares++;
            somaPares += numero;
        } else {
            contadorImpares++;
            somaImpares += numero;
        }
    }

    if (contadorPares > 0) {
        printf("Quantidade de numeros pares: %d\n", contadorPares);
        printf("Media aritmetica dos numeros pares: %.2f\n", somaPares / contadorPares);
    } else {
        printf("Nenhum numero par foi inserido.\n");
    }

    if (contadorImpares > 0) {
        printf("Quantidade de numeros impares: %d\n", contadorImpares);
        printf("Media aritmetica dos numeros impares: %.2f\n", somaImpares / contadorImpares);
    } else {
        printf("Nenhum numero impar foi inserido.\n");
    }

    return 0;
}

