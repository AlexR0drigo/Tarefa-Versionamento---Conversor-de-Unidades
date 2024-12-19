#include <stdio.h>
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

void Velocidade(){
    
    float v; int r, u;
    char saida[10]=" ";
    int menu_Velocidade();
    
    printf("Digite a velocidade (somente o valor numérico): \n");
    scanf("%f", &v);
    
    printf("Informe qual a unidade de medida da velocidade digitada: \n");
    r=menu_Velocidade();
    
    if(r!=1 && r!=2 && r!=3)
        Velocidade();
    
    printf("Para qual unidade de medida deverá ser convertida? \n");
    u=menu_Velocidade();
    
    if(u!=1 && u!=2 && u!=3)
        Velocidade();
    
    switch(r){
        
        case 1:
            switch(u){
                case 2:
                    strcpy(saida, "Km/h");
                    v*=3.6;
                    break;
                case 3:
                    strcpy(saida, "mph");
                    v*=2.23694;
                    break;
                default:
                    strcpy(saida, "m/s");
                    break;
            }
            break;
        
        case 2:
            switch(u){
                case 1:
                    strcpy(saida, "m/s");
                    v /= 3.6;   
                    break;
                case 3:
                    strcpy(saida, "mph");
                    v*=0.621371;
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

void converterTempo(){
    int n;
    float tempo;
    while(1){
    printf("Qual unidade de medida voce deseja converter?\n");
    printf("1- Segundos\n2- Minutos\n3- Horas\n4- Encerar conversao de tempo\n");
    scanf("%d", &n);
    switch(n){
       case 1:
            printf("Informe o valor: ");
            scanf("%f", &tempo);
            printf("Segundos:%.2fs    Minutos:%.2fmin  Horas:%.2fh\n",tempo, tempo/60, (tempo/60)/60);
        break;
        case 2:
            printf("Informe o valor: ");
            scanf("%f", &tempo);
            printf("Segundos:%.2fs    Minutos:%.2fmin  Horas:%.2fh\n",tempo*60, tempo, tempo/60);
        break;
        case 3:
            printf("Informe o valor: ");
            scanf("%f", &tempo);
            printf("Segundos:%.2fs    Minutos:%.2fmin  Horas:%.2fh\n",tempo*60*60, tempo*60, tempo);
        break;
        case 4:
            return;
        break;
        default:
            printf("Comando invalido\n");
    }
    }
    
}

int main() {
    int opcao;

    do {

        printf("\nMenu de opcoes:\n");
        printf("1 - Converter unidades de tempo\n");
        printf("2 - Opcao 2\n");
        printf("3 - Opcao 3\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &opcao);


        switch (opcao) {
            case 1:
                printf("Voce escolheu a Opcao 1.\n");
                converterTempo();
                break;

            case 2:
                printf("Voce escolheu a Opcao 2.\n");
                break;

            case 3:
                printf("Voce escolheu a Opcao 3.\n");
                Velocidade();
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0); 

    return 0;
}