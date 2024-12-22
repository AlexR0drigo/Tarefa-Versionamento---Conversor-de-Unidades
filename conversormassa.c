#include <stdio.h>

void converterMassa() {
    int n;
    float massa;
    while (1) {
        printf("Qual unidade de medida voce deseja converter?\n");
        printf("1 - Quilogramas\n2 - Gramas\n3 - Toneladas\n4 - Encerrar conversao de massa\n");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Informe o valor em quilogramas: ");
                scanf("%f", &massa);
                printf("Quilogramas: %.2fkg    Gramas: %.2fg    Toneladas: %.2ft\n", massa, massa * 1000, massa / 1000);
                break;
            case 2:
                printf("Informe o valor em gramas: ");
                scanf("%f", &massa);
                printf("Quilogramas: %.2fkg    Gramas: %.2fg    Toneladas: %.2ft\n", massa / 1000, massa, massa / 1000000);
                break;
            case 3:
                printf("Informe o valor em toneladas: ");
                scanf("%f", &massa);
                printf("Quilogramas: %.2fkg    Gramas: %.2fg    Toneladas: %.2ft\n", massa * 1000, massa * 1000000, massa);
                break;
            case 4:
                return;
            default:
                printf("Comando invalido\n");
        }
    }
}

int main() {
    int opcao;

    do {
        printf("\nMenu de opcoes:\n");
        printf("1 - Converter unidades de tempo\n");
        printf("2 - Converter unidades de massa\n");
        printf("3 - Opcao 3\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Voce escolheu a Opcao 1.\n");
                break;

            case 2:
                printf("Voce escolheu a Opcao 2.\n");
                converterMassa();
                break;

            case 3:
                printf("Voce escolheu a Opcao 3.\n");
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
