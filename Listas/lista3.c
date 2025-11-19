#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*Lista 03 - Estruturas de repetição*/

    /*1. Escreva um programa que solicita ao usuário dois valores inteiros. Em seguida o programa
    deverá exibir na tela em ordem decrescente todos os números ímpares dentro desse intervalo. */

    int v1, v2;

    printf("\nDigite dois valores inteiros: ");
    scanf("%d %d", &v1, &v2);

    for(int i = v2; i >= v1; i--){
        if(i % 2 != 0){
        printf(" %d",i);
        }
    }

    printf("\n--------------------- Fim da questão 01 ---------------------\n");

    int num_tabuada, vInicio, vFinal;
    char ordem;

    printf("\nDigite o número da tabuada: ");
    scanf("%d", &num_tabuada);
    printf("\nDigite o valor de inicio: ");
    scanf("%d", &vInicio);
    printf("\nDigite o valor final: ");


    scanf("%d", &vFinal);

    printf("\nVocê deseja ver os números em ordem crescente 'c' ou decrescente 'd'? ");
    scanf(" %c", &ordem);

    printf("\nA tabuada de %d:\n", num_tabuada);

    if(ordem == 'c' || ordem == 'C'){
        for(int i = vInicio; i <= vFinal; i++){
            printf("%dx%d=%d\n", num_tabuada, i, (num_tabuada * i));
        }
    } else if(ordem == 'd' || ordem == 'D'){
        for(int j = vFinal; j >= vInicio; j--){
            printf("%dx%d=%d\n", num_tabuada, j, (num_tabuada * j));
        }
    } else {
        printf("\nDigite apenas 'c/C' ou 'd/D'!");
    }

    printf("\n--------------------- Fim da questão 02 ---------------------\n");

    /*3. Escreva um programa que solicita ao usuário valores de alturas de 10 pessoas. Após a leitura
    desses 10 valores de altura o programa deverá exibir o valor da maior e da menor altura
    digitada.*/

        float altura, maior, menor;

    printf("Digite a altura da pessoa 1: ");
    scanf("%f", &altura);

    maior = altura;
    menor = altura;

    for (int i = 2; i <= 10; i++) {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura);

        if (altura > maior) {
            maior = altura;
        }

        if (altura < menor) {
            menor = altura;
        }
    }

    printf("\nA maior altura é: %.2f m", maior);
    printf("\nA menor altura é: %.2f m\n", menor);



    return 0;
}