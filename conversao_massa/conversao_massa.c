#include "conversao_massa.h"
#include <stdio.h>
#include "conversao_massa.h"

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

