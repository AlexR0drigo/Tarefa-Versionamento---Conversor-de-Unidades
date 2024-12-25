#include <stdio.h>
#include "conversao_volume.h"

float converte_litros_m3(float litros) {
    return litros * 0.001;
}

float converte_mililitros_litros(float mililitros) {
    return mililitros * 0.001;
}

float converte_galoes_litros(float galoes) {
    return galoes * 3.78541;
}

void executar_conversoes_volume() {
    int opcao;
    float valor, resultado;

    printf("\nEscolha a conversão que deseja realizar:");
    printf("\n1 - Litros para Metros Cúbicos");
    printf("\n2 - Mililitros para Litros");
    printf("\n3 - Galões para Litros");
    printf("\nDigite a opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nDigite o valor em litros: ");
            scanf("%f", &valor);
            resultado = converte_litros_m3(valor);
            printf("\n%.6f litros equivalem a %.6f metros cúbicos.\n", valor, resultado);
            break;
        case 2:
            printf("\nDigite o valor em mililitros: ");
            scanf("%f", &valor);
            resultado = converte_mililitros_litros(valor);
            printf("\n%.6f mililitros equivalem a %.6f litros.\n", valor, resultado);
            break;
        case 3:
            printf("\nDigite o valor em galões: ");
            scanf("%f", &valor);
            resultado = converte_galoes_litros(valor);
            printf("\n%.6f galões equivalem a %.6f litros.\n", valor, resultado);
            break;
        default:
            printf("\nOpção inválida!\n");
    }
}
