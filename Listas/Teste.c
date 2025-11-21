#include <stdio.h>
#include <windows.h>

/*QUESTÃO 02 ------------------------------------*/
void conversaro(int hora, int min, int seg){
    printf("\nO valor convertido em segundo é %i",((hora*60*60) + (min*60) + seg));
}
//------------------------------------------------

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    /*2. Escreva um programa que contenha uma função que receba três valores de entrada referentes 
    a hora, minuto e segundo. Em seguida o seu programa deverá exibir o valor convertido para 
    segundos, sabendo que uma hora tem 60 minutos e que um minuto tem 60 segundos.*/
    int hora, minuto, segundo;
    printf("\nDigite quantas horas são no formato: Horas, minutos e segundos para comvertemos quantos segundos ");
    printf("isso dá: ");
    scanf("%d %d %d", &hora, &minuto,&segundo);

   conversaro(hora, minuto, segundo);

    return 0;
}


