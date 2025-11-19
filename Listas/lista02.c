#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*Lista 2 - Estruturas Condicionais*/

    /*1. Escreva um programa que solicita o valor de um ano ao usuário, em seguida informa se o ano
    fornecido é ou não bissexto. [Dica: um ano é bissexto se é divisível por 4 mas não por 100.
    Para que um número X seja considerado divisível por um número Y é preciso que o resto da
    divisão de X por Y seja igual a ZERO].*/

    int ano;
    printf("\nDite um ano: ");
    scanf("%d", &ano);

    if(ano < 0){
        printf("\nNão existe um %d ano!", ano);
    } else if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("\nO ano %d é bissexto!", ano);
    } else {
        printf("\nO ano %d não é bissexto!", ano);
    }

    printf("\n------------ FIM DA QUESTÃO 01 ------------\n");

    /*2. Escreva um programa que solicite um número entre 1 e 10. Caso o usuário digite um valor
    dentro dessa faixa o programa deverá exibir a mensagem “O número digitado está DENTRO
    da faixa solicitada.”, senão o programa deverá exibir a mensagem “O número digitado está
    FORA da faixa solicitada.”.*/

    int num;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    if(num > 0 && num <= 10){
        printf("\nO valor digitado está DENTRO da faixa solicitada!");
    } else {
        printf("\nO valor solicitado está FORA da faixa solicitada!");
    }

    printf("\n------------ FIM DA QUESTÃO 02 ------------\n");

    /*3. Escreva um programa que dado dois valores informe qual deles é o maior.*/

    int v1, v2;

    printf("\nDigite dois valores: ");
    scanf("%d %d", &v1, &v2);

    if(v1 > v2){
        printf("\n%d é maior que %d!\n", v1, v2);
    } else if (v1 < v2){
        printf("\n%d é maior que %d!\n", v2, v1);
    } else {
        printf("\nOs valores são iguais!");
    }

    printf("\n------------ FIM DA QUESTÃO 03 ------------\n");

    /*4. Escreva um programa que leia dois valores inteiros e escreva como saída a diferença entre o
    maior valor e o menor valor.*/


    printf("\nDigite dois valores: ");
    scanf("%d %d", &v1, &v2);


    if(v1 > v2){
        printf("\n%d - %d = %d", (v1 - v2));
    } else if(v2 > v1){
        printf("\n%d - %d = %d", (v2 - v1));
    } else {
        printf("\nOs valores são iguais!");
    }

    printf("\n------------ FIM DA QUESTÃO 04 ------------\n");


    /*5. Escreva um programa que solicita ao usuário 3 valores inteiros. Em seguida o programa deverá
    exibir os 3 valores digitados pelo usuário em ordem crescente.*/

    int n1, n2, n3;

    printf("\nDigite 3 valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    /*

    int maior = (n1 > n2 && n1 > n3) ? n1 : ((n2 > n3) ? n2 : n3);
    int menor = (n1 < n2 && n1 < n3) ? n1 : (n2 < n3 ? n2 : n3);
    int meiuca  = (n1 != maior && n1 != menor) ? n1 : (n2 != maior && n2 != menor ? n2 : n3);

    
    printf("\nOrdem crescente: %d %d %d\n", menor, meiuca, maior);*/

    /*Usando IF-ELSE*/

    int maior, meiuca, menor;
    char ordem;

    if(n1 > n2 && n1 > n3 && n2 > n3){
        maior = n1; 
        meiuca = n2;
        menor = n3;
    } else if (n2 > n1 && n2 > n3 && n1 > n3){
        maior = n2;
        meiuca = n1;
        menor = n3;
    } else if (n3 > n1 && n3 > n2 && n2 > n1){
        maior = n3;
        meiuca = n2;
        menor = n1;
    } else if (n1 > n2 && n1 > n3 && n3 > n2){
        maior = n1;
        meiuca = n3;
        menor = n2;
    } else if (n2 > n1 && n2 > n3 && n3 > n1){
        maior = n2;
        meiuca = n3;
        menor = n1;
    } else {
        maior = n3;
        meiuca = n1;
        menor = n2;
    }
    
    printf("\nOrdem crescente: %d %d %d\n", menor, meiuca, maior);

    printf("\n------------ FIM DA QUESTÃO 05 ------------\n");

    /*6. Escreva um programa que solicita ao usuário 3 valores inteiros. Em seguida o programa deverá
    perguntar ao usuário se deseja ver os valores impressos em ordem crescente ou decrescente.
    Após a escolha, o programa deverá exibir os valores ordenados conforme indicação do usuário.*/


    printf("\nDigite a ordem ('c' para crescente ou 'd' para decrescente): ");
    scanf(" %c", &ordem);

    switch (ordem) {
        case 'c':
        case 'C':
            printf("\nOrdem crescente: %d %d %d\n", menor, meiuca, maior);
            break;

        case 'd':
        case 'D':
            printf("\nOrdem decrescente: %d %d %d\n", maior, meiuca, menor);
            break;

        default:
            printf("\nDigite apenas 'c' ou 'd'!\n");
            break;
    }


        return 0;
    }




