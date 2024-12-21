//7- Conversor de unidades de área (metro quadrado, centímetro quadrado)
#include <stdio.h>
#include <locale.h> // Biblioteca para suportar caracteres especiais

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

int main() {
    // Configuração para suporte a caracteres especiais
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;

    do {
        // Menu
        printf("\nMenu de opções:\n");
        printf("1 - Converter unidades de área\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            converterArea();
        } else if (opcao == 0) {
            printf("Saindo do programa...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}