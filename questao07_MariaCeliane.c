#include <stdio.h>

// Função para converter metros quadrados para centímetros quadrados
float metrosParaCentimetrosQuadrados(float metrosQuadrados) {
    return metrosQuadrados * 10000;  // 1 metro quadrado = 10000 centímetros quadrados
}

// Função para converter centímetros quadrados para metros quadrados
float centimetrosParaMetrosQuadrados(float centimetrosQuadrados) {
    return centimetrosQuadrados / 10000;  // 1 centímetro quadrado = 0.0001 metros quadrados
}

int main() {
    int opcao;
    float valor, resultado;

    printf("Escolha a conversão de área:\n");
    printf("1 - Metro quadrado para Centímetro quadrado\n");
    printf("2 - Centímetro quadrado para Metro quadrado\n");
    printf("Digite sua escolha (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em metros quadrados: ");
            scanf("%f", &valor);
            resultado = metrosParaCentimetrosQuadrados(valor);
            printf("%.2f metros quadrados é igual a %.2f centímetros quadrados.\n", valor, resultado);
            break;

        case 2:
            printf("Digite o valor em centímetros quadrados: ");
            scanf("%f", &valor);
            resultado = centimetrosParaMetrosQuadrados(valor);
            printf("%.2f centímetros quadrados é igual a %.4f metros quadrados.\n", valor, resultado);
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
