#include <stdio.h>
#include "conversao_comprimento.h"

// Constantes para as unidades
const int KILO = 1000000;
const int HECTA = 100000;
const int DECA = 10000;
const int X = 1000;
const int DECI = 100;
const int CENTI = 10;
const int MILI = 1;

void converterUnidade() {
    int valorInicio, atualmedida = 0, novamedida = 0;
    float valorFinal;

    int unidades[] = {KILO, HECTA, DECA, X, DECI, CENTI, MILI};
    char* nomeunidades[] = {"KILO", "HECTA", "DECA", "X(METRO)", "DECI", "CENTI", "MILI"};

    printf("Escolha a unidade de medida:\n");
    printf("KILO (00) - HECTA (01) - DECA (02) - X (03) - DECI (04) - CENTI (05) - MILI (06)\n");

    printf("Informe a ATUAL opção de unidade de medida: ");
    scanf("%d", &atualmedida);

    printf("Informe uma NOVA opção de unidade de medida: ");
    scanf("%d", &novamedida);

    printf("Informe o número na unidade de medida inicial: ");
    scanf("%d", &valorInicio);

    if (atualmedida >= 0 && atualmedida < 7 && novamedida >= 0 && novamedida < 7) {
        valorFinal = valorInicio * unidades[atualmedida] / (float)unidades[novamedida];
        printf("O Valor %d %s equivale a: %.4f %s\n", valorInicio, nomeunidades[atualmedida], valorFinal, nomeunidades[novamedida]);
    } else {
        printf("Opção inválida!\n");
    }
}
