#include <stdio.h>
//  https://onlinegdb.com/FDc3afyOW
// Constantes para as unidades
const int KILO = 1000000;   // [0]
const int HECTA = 100000;   // [1]
const int DECA = 10000;     // [2]
const int X = 1000;         // [3]
const int DECI = 100;       // [4]
const int CENTI = 10;       // [5]
const int MILI = 1;         // [6]

/*PROBLEMA => COMO FAZER A CONVERSÃO DENTRE AS RESPECTIVAS UNIDADES DE medida
SOLUÇÃO => ATRAVES DA CONTA, valorInicio * unidades[atualmedida] / (float) unidades[novamedida];
DETERMINAR AS MEDIDAS, TENDO AS CONSTANTES

*/

/*// Se a unidade nova for maior, multiplicar
        if (novamedida > atualmedida) {
            valorFinal = valorInicio * unidades[atualmedida] / (float) unidades[novamedida];
        } 
        // Se a unidade nova for menor, dividir
        else if (novamedida < atualmedida) {
            valorFinal = valorInicio * unidades[atualmedida] / (float) unidades[novamedida];
        }
        // Se as unidades forem iguais, o valor é igual
        else {
            valorFinal = valorInicio;
        }*/

// Função principal
int main() {
    int valorInicio, atualmedida = 0, novamedida = 0;
    float valorFinal;
    
    // A tabela de unidades para simplificar a conversão
    int unidades[] = {KILO, HECTA, DECA, X, DECI, CENTI, MILI};
    char* nomeunidades[] = {"KILO", "HECTA", "DECA", "X(METRO)", "DECI", "CENTI", "MILI"};

    // Solicitar a escolha de unidades
    printf("Escolha a unidade de medida:\n");
    printf("KILO (00) - HECTA (01) - DECA (02) - X (03) - DECI (04) - CENTI (05) - MILI (06)\n");

    // Entrada da opção de unidade de medida atual
    printf("Informe a ATUAL opção de unidade de medida: ");
    scanf("%d", &atualmedida);

    // Entrada da opção de nova unidade de medida
    printf("Informe uma NOVA opção de unidade de medida: ");
    scanf("%d", &novamedida);

    // Entrada do valor a ser convertido
    printf("Informe o número na unidade de medida inicial: ");
    scanf("%d", &valorInicio);

    // Verificar se as opções são válidas
    if (atualmedida >= 0 && atualmedida < 7 && novamedida >= 0 && novamedida < 7) {
        valorFinal = valorInicio * unidades[atualmedida] / (float) unidades[novamedida];

        // Exibir o resultado
        printf("O Valor %d %s equivale a: %.4f %s\n", valorInicio, nomeunidades[atualmedida], valorFinal, nomeunidades[novamedida]);
    } else {
        // Caso as opções sejam inválidas
        printf("Opção inválida!\n");
    }

    return 0;
}
