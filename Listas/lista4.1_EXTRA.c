#include <stdio.h>
#include <windows.h>
#include <string.h>
//Bibliotecas para questão 07
#include <stdlib.h>
#include <time.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    /*Lista EXTRA de Vetores e Matrizes.*/

    /*1. Leitura de Dados de Sensores de Temperatura. Contexto: Um sistema de monitoramento de temperatura
    em uma estufa inteligente coleta leituras de 5 sensores a cada minuto. Crie um programa que leia as 5
    temperaturas e as armazene em um vetor. O sistema deverá calcular a média aritmética das temperaturas
    e como saída exibir os valores das temperaturas lidas e resultado da média.
    Entrada:

    25.1 26.3 24.9 25.5 26.0

    Saída:

    Temperaturas coletadas: 25.1C, 26.3C, 24.9C, 25.5C, 26.0C
    Temperatura média da estufa: 25.56C*/

    double temps[5];
    double somatorio = 0;

    printf("\nDigite 5 leituras de 5 sensores: \n");
    for(int i = 0; i < 5; i++){
        scanf("%lf", &temps[i]);
        somatorio += temps[i];
    }

    double media = somatorio/5;

    printf("\nA média das temperaturas coletadas é: %0.2lfC\n", media);

    printf("\n------ FIM DA QUESTÃO 01 ------\n");

    /*2. Inversão de Ordem de Comandos. Contexto: Em uma linha de montagem automatizada, uma sequência
    de 7 comandos precisa ser executada na ordem inversa em caso de manutenção. Crie um programa que
    leia os comandos e os exiba na ordem inversa.
    Entrada:

    ComandoA ComandoB ComandoC ComandoD ComandoE ComandoF ComandoG

    Saída:

    Comandos na ordem inversa:
    ComandoG ComandoF ComandoE ComandoD ComandoC ComandoB ComandoA*/

    char comandos[7][50];

    /*Inicializamos como uma Matriz, uma vez que se inicializarmos apenas 'comandos[7]' teremos simplesmente
    lugares para 7 char.*/

    printf("Digite os comandos:\n");
    for (int i = 0; i < 7; i++){
        scanf("%49s", comandos[i]);  // %49s evita overflow
    }

    printf("\nOs comandos digitados foram:\n");
    for(int i = 0; i < 7; i++){
        printf("%s ", comandos[i]);  
    }

    /*O QUE É UM OVERFLOW?
    
    UM BUFFER OVERFLOW é quando o usuário digita mais dados do que o espaço do array consegue suportar*/

    for (int j = 6; j >= 0; j--){
    printf("%s ", comandos[j]);
    }

    printf("\n------ FIM DA QUESTÃO 02 ------\n");

    /*3. Identificação de Valores de Corrente. Contexto: Em uma determinada linha de produção 6 motores
    elétricos estão operando de forma simultânea. Um sistema de monitoramento analisa a leitura das
    correntes de cada motor para identificar qual o maior e menor valor de corrente elétrica consumida.
    Entrada:

    3.5 4.1 4.7 3.9 4.0 4.5

    Saída:
    Maior valor de corrente consumida: 4.7
    Menor valor de corrente consumida: 3.5*/

    double valores[6];

    printf("\nDigite os valores de correntes: \n");
    for(int i = 0; i < 6; i++){
        scanf("%lf", &valores[i]);
    }

    double maior = valores[0];
    double menor = valores[0];

    for(int i = 0; i < 6; i++){
       
        if(valores[i] > maior){
            maior = valores[i];
        }

        if(valores[i] < menor){
            menor = valores[i];
        }

    }

    printf("\nO maior valor é: %0.2lf ", maior);
    printf("\nO menor valor é: %0.2lf ", menor);

    printf("\n------ FIM DA QUESTÃO 03 ------\n");

    /*Identificação de Leitura Anômala. Contexto: Para detectar falhas em um sensor de temperatura em um
    reservatório, um robô submarino realiza 10 leituras de 10 sensores espalhados ao longo desse reservatório.
    Se qualquer valor leitura estiver fora do intervalo de 0 a 100 unidades, deve ser sinalizada como anômala.
    Entrada:

    10.5 20.0 95.2 -5.0 50.0 101.0 75.0 15.0 30.0 80.0

    Saída:

    Leitura anômala detectada na posição 4: -5.0
    Leitura anômala detectada na posição 6: 101.0*/

    double v_sensores[10];

    printf("\nDigite 10 entradas de sensores para verificação: \n");
    for(int i = 0; i < 10; i++){
        scanf("%lf", &v_sensores[i]);
    }

    for(int i = 0; i < 10; i++){

        if(v_sensores[i] < 0 || v_sensores[i] > 100){
            printf("Leitura anômala detectada na posição %d: %0.2lf", i,  v_sensores[i]);
        }
    }

    printf("\n------ FIM DA QUESTÃO 04 ------\n");

    /*5. Controle de Posição de Atuadores Lineares. Contexto: Um sistema de posicionamento de uma máquina
    CNC controla 4 atuadores lineares. Cada atuador possui uma posição inicial e uma posição final. Armazene
    essas posições em dois vetores, um para posição inicial e outro para posição final, e calcule a distância
    percorrida por cada atuador, a qual é dada pela diferença dos valores de leitura. Caso o valor da distância
    percorrida seja positivo significa que o deslocamento foi para cima, caso seja negativo o deslocamento foi
    para baixo e se for ZERO, indica que não houve deslocamento.
    Entrada:

    // Posições iniciais
    10.0 50.1 4.7 30.9
    // Posições finais
    50.0 40.0 74.7 30.9*/

    double posicoes_iniciais[4] = {10.0, 50.1, 4.7, 30.9};
    double posicoes_finais[4] = {50.0, 40.0, 74.7, 30.9};

    double distancia;

    for(int i = 0; i < 4; i++){
        distancia = posicoes_finais[i] - posicoes_iniciais[i];

        if(distancia > 0){
            printf("\nO atuador se moveu para cima com a distânica de %0.2f!", distancia);
        } else if (distancia == 0){
            printf("\nO atuador não se mexeu!\n");
        } else {
            printf("\nO atuador se moveu para baixo com a distância de %0.2f!", distancia);
        }
    }
    
    printf("\n------ FIM DA QUESTÃO 05 ------\n");

    printf("\nA questão 6 veio repetida\n");

    /*7. Contagem de Pixels Ativos em uma Imagem Binária de Sensor Óptico. Contexto: Um sensor gera uma
    imagem binária 4x4, onde 1 = pixel ativo e 0 = inativo. Implemente um programa que faça a leitura dos
    pixels da imagem binária e conte os pixels ativos. Após o processamento da imagem seu programa deverá
    informar a quantidade de pixels ativos na imagem.
    Entrada:

        0 1 0 1
        1 0 1 0
        0 1 0 1
        1 0 1 0

    Saída:

    Quantidade de pixels ativos: 8*/

    srand(time(NULL));

    int pixels[4][4];

    int pixelsAtivos = 0;
    for(int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++){
            pixels[i][j] = rand() % 2;
            if(pixels[i][j] == 1){
                pixelsAtivos++;
            }
        }
    }
    
    printf("\nA matriz é: \n");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", pixels[i][j]);
        }
        printf("\n");
    }

    printf("\nE a quantidade de pixels ativos é: %d", pixelsAtivos);

    printf("\n------ FIM DA QUESTÃO 07 ------\n");

    /*8. Pontos de pressão sobre uma plataforma. Contexto: Uma plataforma possui um grid de sensores dispostos
    numa matriz 8x8 de coordenadas (x, y) os quais fazem a captura de valores de pressão quando algum objeto
    é colocado sobre a plataforma. O seu programa deve simular uma situação de coleta dos valores dos
    sensores da plataforma e indicar a posição do sensor (x, y) e o valor do sensor com maior valor.
    Entrada:

        8 9 8 1 0 1 0 1
        8 8 8 0 1 1 4 1
        0 1 2 1 0 1 0 1
        1 0 1 0 1 3 0 1
        0 1 0 1 1 1 0 1
        1 0 1 0 0 1 0 1
        0 1 0 1 1 1 0 1
        1 0 1 0 0 1 0 1

    Saída:

    Posição (0, 1) valor: 9*/

    /*Mais uma vez, vamos automatizar a construção da matriz utilizando srand*/

    int plataforma[8][8];
    int maior = -1;
    int xMaior = 0, yMaior = 0;


    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {

            plataforma[i][j] = rand() % 10;   

            if (plataforma[i][j] > maior) {
                maior = plataforma[i][j];
                xMaior = i;
                yMaior = j;
            }
        }
    }

    printf("\nValores capturados pelos sensores:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", plataforma[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior valor encontrado: %d na posição (%d, %d)\n", maior, xMaior, yMaior);

    printf("\n------ FIM DA QUESTÃO 08 ------\n");

    



    return 0;
}