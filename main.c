#include <stdio.h>
#include <string.h>
#include <locale.h> 

//Declaração de funções de conversão
void converterUnidade();
void converterMassa();
float converte_litros_m3(float litros);
float converte_mililitros_litros(float mililitros);
float converte_galoes_litros(float galoes);
void executar_conversoes_volume();
int menu_Velocidade();
void Velocidade();
void converterArea();
void converterTempo();

// interface principal para seleção de conversão  
int main() {
    int opcao;

    do {
        // Menu com melhorias visuais
        printf("\n================================================\n");
        printf("       MENU DE OPÇÕES\n");
        printf("================================================\n");
        printf("1 - Converter unidades de Comprimento\n");
        printf("2 - Converter unidades de Massa\n");
        printf("3 - Converter unidades de Volume\n");
        printf("4 - Converter unidades de Velocidade\n");
        printf("5 - Converter Área\n");
        printf("6 - Converter Tempo\n");
        printf("0 - Sair\n");
        printf("================================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        printf("\n");

        switch (opcao) {
            case 1:
                converterUnidade();
                break;

            case 2:
                converterMassa();
                break;

            case 3:
                executar_conversoes_volume();
                break;

            case 4:
                Velocidade();
                break;
                
            case 5:
                converterArea();
                break;

            case 6:
                converterTempo();
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("\033[1;31mErro: Opção inválida. Tente novamente.\033[0m\n");  // Mensagem de erro em vermelho
                break;
        }
    } while (opcao != 0); 

    return 0;
}


// Constantes para as unidades
const int KILO = 1000000;   // [0]
const int HECTA = 100000;   // [1]
const int DECA = 10000;     // [2]
const int X = 1000;         // [3]
const int DECI = 100;       // [4]
const int CENTI = 10;       // [5]
const int MILI = 1;         // [6]

//Funcionamento das funções de conversão

// Função para realizar a conversão de comprimento
void converterUnidade() {
    int valorInicio, atualmedida = 0, novamedida = 0;
    float valorFinal;

    /*PROBLEMA => COMO FAZER A CONVERSÃO DENTRE AS RESPECTIVAS UNIDADES DE medida
    SOLUÇÃO => ATRAVES DA CONTA, valorInicio * unidades[atualmedida] / (float) unidades[novamedida];
    DETERMINAR AS MEDIDAS, TENDO AS CONSTANTES*/
    // A tabela de unidades para simplificar a conversão

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


    int unidades[] = {KILO, HECTA, DECA, X, DECI, CENTI, MILI};
    // Corespondência de unidades
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
}

// Função para realizar a conversão de massa
void converterMassa() {
    int n;
    float massa;
    while (1) {
        printf("Qual unidade de medida voce deseja converter?\n");
        printf("1 - Quilogramas\n2 - Gramas\n3 - Toneladas\n4 - Encerrar conversao de massa\n");
        scanf("%d", &n);
        switch (n) {
            case 1:
                printf("Informe o valor em quilogramas: ");
                scanf("%f", &massa);
                printf("Quilogramas: %.2fkg    Gramas: %.2fg    Toneladas: %.2ft\n", massa, massa * 1000, massa / 1000);
                break;
            case 2:
                printf("Informe o valor em gramas: ");
                scanf("%f", &massa);
                printf("Quilogramas: %.2fkg    Gramas: %.2fg    Toneladas: %.2ft\n", massa / 1000, massa, massa / 1000000);
                break;
            case 3:
                printf("Informe o valor em toneladas: ");
                scanf("%f", &massa);
                printf("Quilogramas: %.2fkg    Gramas: %.2fg    Toneladas: %.2ft\n", massa * 1000, massa * 1000000, massa);
                break;
            case 4:
                return;
            default:
                printf("Comando invalido\n");
        }
    }
}

// Funções para realizar a conversão de volume
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

float converte_litros_m3(float litros) {
    // 1 litro = 0.001 metros cúbicos
    return litros * 0.001;
}

float converte_mililitros_litros(float mililitros) {
    // 1 mililitro = 0.001 litros
    return mililitros * 0.001;
}

float converte_galoes_litros(float galoes) {
    // 1 galão (EUA) = 3.78541 litros
    return galoes * 3.78541;
}

// Funções para realizar a conversão de velocidade
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

// Função para realizar a conversão de área
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

// Função para realizar a conversão de tempo 
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



