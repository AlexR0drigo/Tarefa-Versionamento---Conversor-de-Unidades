#include <stdio.h>
#include "conversao_velocidade.h"
#include <string.h>

int menu_Velocidade(){
    int resp;
    printf("1 - Metros por segundo (m/s) \n");
    printf("2 - Quilômetros por hora (km/h) \n");
    printf("3 - Milhas por hora (mph) \n");
    printf("Qualquer outro valor - Digitar a velocidade novamente \n");
    scanf("%d", &resp);
    return resp;
}

void converterVelocidade() {
    float v;
    int r, u;
    char saida[10] = " ";
    int menu_Velocidade();

    printf("Digite a velocidade (somente o valor numérico): \n");
    scanf("%f", &v);

    printf("Informe qual a unidade de medida da velocidade digitada: \n");
    r = menu_Velocidade();

    if (r != 1 && r != 2 && r != 3)
        converterVelocidade();

    printf("Para qual unidade de medida deverá ser convertida? \n");
    u = menu_Velocidade();

    if (u != 1 && u != 2 && u != 3)
        converterVelocidade();

    switch (r) {
        case 1:
            switch (u) {
                case 2:
                    strcpy(saida, "Km/h");
                    v *= 3.6;
                    break;
                case 3:
                    strcpy(saida, "mph");
                    v *= 2.23694;
                    break;
                default:
                    strcpy(saida, "m/s");
                    break;
            }
            break;

        case 2:
            switch (u) {
                case 1:
                    strcpy(saida, "m/s");
                    v /= 3.6;
                    break;
                case 3:
                    strcpy(saida, "mph");
                    v *= 0.621371;
                    break;
                default:
                    strcpy(saida, "Km/h");
                    break;
            }
            break;

        case 3:
            switch (u) {
                case 1:
                    strcpy(saida, "m/s");
                    v /= 2.23694;
                    break;
                case 2:
                    strcpy(saida, "Km/h");
                    v /= 0.621371;
                    break;
                default:
                    strcpy(saida, "mph");
                    break;
            }
            break;
    }
    printf("Sua Velocidade convertida é: %f%s", v, saida);
}
