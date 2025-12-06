#include <stdio.h>
#include <windows.h>
//Bibliotecas para questão 08
#include <stdlib.h>
#include <time.h>


int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


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

    //Vamos fazer um pouco diferente: Vamos gerar 0s e 1s aleatoriamente dentro de uma matriz 4x4;

    srand(time(NULL));

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
    
    return 0;
}


