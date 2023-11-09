#include <stdio.h>
#include <stdlib.h>

int main(){
int temperatura;
//
printf("Digite a temperatura:");
scanf("%d", &temperatura);

if (temperatura>25)
{
    printf("O tempo está ensolarado");
}
if (temperatura<15)
{
    printf("O clima está chuvoso");
}
if (temperatura<=25 )
{
    printf("O clima está nublado");
}

return 0;
}