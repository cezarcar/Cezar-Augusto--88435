#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    //
    printf("Digite a sua nota");
    scanf("%f", &nota);

    if (nota < 5)
    {
        printf("Nota insuficiente!");
    }
    if (nota <= 6.9)
    {
        printf("Razoável!");
    }
    if (nota <= 8.9)
    {
        printf("Bom!");
    }
    if (nota > 9)
    {
        printf("Excelente");
    }
    
    return 0;
}
