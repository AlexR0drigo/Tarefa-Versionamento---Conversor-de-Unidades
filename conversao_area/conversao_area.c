#include <stdio.h>
#include "conversao_area.h"

void converterArea() {
    float area;
    int opcao_origem, opcao_destino;

    // Solicitar o valor da área
    printf("Digite o valor da área: ");
    scanf("%f", &area);

    // Solicitar a unidade de origem
    printf("Escolha a unidade de origem:\n");
    printf("1 - Metro quadrado (m²)\n");
    printf("2 - Centímetro quadrado (cm²)\n");
    scanf("%d", &opcao_origem);

    // Solicitar a unidade de destino
    printf("Escolha a unidade de destino:\n");
    printf("1 - Metro quadrado (m²)\n");
    printf("2 - Centímetro quadrado (cm²)\n");
    scanf("%d", &opcao_destino);

    // Realizar as conversões
    if (opcao_origem == 1 && opcao_destino == 2) {
        area *= 10000; // 1 m² = 10.000 cm²
        printf("Área convertida: %.2f cm²\n", area);
    } else if (opcao_origem == 2 && opcao_destino == 1) {
        area /= 10000; // 1 cm² = 0.0001 m²
        printf("Área convertida: %.2f m²\n", area);
    } else {
        printf("As unidades de origem e destino são iguais. Nenhuma conversão necessária.\n");
    }
}
