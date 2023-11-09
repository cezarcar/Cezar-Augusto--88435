#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;

    
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configuracoes\n");
    printf("Escolha o que deseja: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("começando  novo jogo...\n");
          
            break;
        case 2:
            printf("Carregando jogo...\n");
          
            break;
        case 3:
            printf("abertura das configurações...\n");
            
            break;
        default:
            printf("Opcão invalida!\n");
            break;
    }

    return 0;
}