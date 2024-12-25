#include "conversao_tempo.h"
#include <stdio.h>

void converterTempo() {
    int n;
    float tempo;
    while(1) {
        printf("Qual unidade de medida voce deseja converter?\n");
        printf("1- Segundos\n2- Minutos\n3- Horas\n4- Encerar conversao de tempo\n");
        scanf("%d", &n);
        switch(n) {
            case 1:
                printf("Informe o valor: ");
                scanf("%f", &tempo);
                printf("Segundos: %.2fs    Minutos: %.2fmin  Horas: %.2fh\n", tempo, tempo / 60, (tempo / 60) / 60);
                break;
            case 2:
                printf("Informe o valor: ");
                scanf("%f", &tempo);
                printf("Segundos: %.2fs    Minutos: %.2fmin  Horas: %.2fh\n", tempo * 60, tempo, tempo / 60);
                break;
            case 3:
                printf("Informe o valor: ");
                scanf("%f", &tempo);
                printf("Segundos: %.2fs    Minutos: %.2fmin  Horas: %.2fh\n", tempo * 60 * 60, tempo * 60, tempo);
                break;
            case 4:
                return;
                break;
            default:
                printf("Comando invalido\n");
        }
    }
}
