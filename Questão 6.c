#include <stdio.h>
#include <stdlib.h>

int main()
{
int produto;

//
printf("Escolha a peça de roupa:");
printf("1-camisa\n");

printf("2-short\n");

printf("3-calça\n");
scanf("%d", &produto);

switch (produto)
{
case 1:
printf("A calça é 29 reais");
    break;
case 2:
printf("O short custa 243 reais");
break;

case 3:
printf(" A calça é 1000 reais");
    break;
}

return 0;
}



