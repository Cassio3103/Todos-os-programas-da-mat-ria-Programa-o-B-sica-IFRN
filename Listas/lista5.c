#include <stdio.h>
#include <windows.h>
#include <string.h>

/*Escopos de funções: */

/*QUESTÃO 01 ------------------------------------*/
void formato_textual(int dia, int mes, int ano){
    char *meses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    if(mes < 1 || mes > 12){
        printf("Mes invalido!\n");
        return;
    }
    printf("%d de %s de %d\n", dia, meses[mes - 1], ano);
}
//------------------------------------------------
/*QUESTÃO 02 ------------------------------------*/
void conversaro(int hora, int min, int seg){
    printf("\nO valor convertido em segundo é %i",((hora*60*60) + (min*60) + seg));
}
//------------------------------------------------
/*QUESTÃO 03 ------------------------------------*/

//------------------------------------------------
int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*1. Escreva um programa que contenha uma função que receba o valor de uma data (dia, mês e 
    ano – três parâmetros) e exiba na tela no formato textual por extenso. Veja o exemplo:  
    a) Entrada: dia=1, mês=1, ano=2020 è Saída: 1 de janeiro de 2020*/

     
    int dia, mes, ano;
    printf("\nDigite um dia do ano em formto de valor de data: \n");
    scanf("%d %d %d", &dia, &mes, &ano);

    formato_textual(dia, mes, ano);

    printf("\n------ FIM DA QUESTÃO 01 ------\n");

    /*2. Escreva um programa que contenha uma função que receba três valores de entrada referentes 
    a hora, minuto e segundo. Em seguida o seu programa deverá exibir o valor convertido para 
    segundos, sabendo que uma hora tem 60 minutos e que um minuto tem 60 segundos.*/
    int hora, minuto, segundo;
    printf("\nDigite quantas horas são no formato: Horas, minutos e segundos para comvertemos quantos segundos ");
    printf("isso dá: ");
    scanf("%d %d %d", &hora, &minuto,&segundo);

   conversaro(hora, minuto, segundo);

   printf("\n------ FIM DA QUESTÃO 02 ------\n");

   

    return 0;
}