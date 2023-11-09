#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idioma;
    //
    printf("Escolha a linguagem:");

    printf("1-Inglês\n");
    printf("2 - francês\n");
    printf("3 - espanhol\n");
    scanf("%d", &idioma);

    switch (idioma)
    {

    case 1:
        printf("Welcome\n");
        break;

    case 2:
        printf("Accueillir\n");
        break;

    case 3:
        printf("Bienvenido\n");
        break;

    default:
        printf("Invalid option!");
        break;
    }

    return 0;
}