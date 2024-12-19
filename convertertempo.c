#include <stdio.h>

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
        printf("Escolha uma opcao: ");
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