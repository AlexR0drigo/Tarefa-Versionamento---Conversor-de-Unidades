#include <stdio.h>
#include <locale.h>

#include "conversao_comprimento/conversao_comprimento.h"
#include "conversao_massa/conversao_massa.h"
#include "conversao_volume/conversao_volume.h"
#include "conversao_velocidade/conversao_velocidade.h"
#include "conversao_area/conversao_area.h"
#include "conversao_tempo/conversao_tempo.h"


// gcc -I./conversao_comprimento -I./conversao_massa -I./conversao_volume -I./conversao_velocidade -I./conversao_area -I./conversao_tempo main.c ./conversao_comprimento/*.c ./conversao_massa/*.c ./conversao_volume/*.c ./conversao_velocidade/*.c ./conversao_area/*.c ./conversao_tempo/*.c -o programa


// Interface principal para seleção de conversão
int main() {
    int opcao;

    do {

        printf("\n================================================\n");
        printf("       MENU DE OPÇÕES\n");
        printf("================================================\n");
        printf("1 - Converter unidades de Comprimento\n");
        printf("2 - Converter unidades de Massa\n");
        printf("3 - Converter unidades de Volume\n");
        printf("4 - Converter unidades de Velocidade\n");
        printf("5 - Converter Area\n");
        printf("6 - Converter Tempo\n");
        printf("0 - Sair\n");
        printf("================================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        printf("\n");

        switch (opcao) {
            case 1:
                converterUnidade();
                break;
            case 2:
                converterMassa();
                break;
            case 3:
                executar_conversoes_volume();
                break;
            case 4:
                converterVelocidade();
                break;
            case 5:
                converterArea();
                break;
            case 6:
                converterTempo();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("\033[1;31mErro: Opção inválida. Tente novamente.\033[0m\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
