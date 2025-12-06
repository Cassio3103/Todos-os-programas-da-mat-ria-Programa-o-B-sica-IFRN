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
void maiorNumeroEh(int x, int y){
    if(x > y)
        printf("\nO maior número é %d", x);
    else if(x < y)
        printf("\nO maior número é %d", y);
    else 
        printf("\nOs números são iguais!");
}
//------------------------------------------------
/*QUESTÃO 04 ------------------------------------*/
void operacao(int x, int y, char o){
    switch (o)
    {
    case '+':
        printf("\nA soma é: %d", (x + y));
        break;
    case '-':
        printf("\nA subtração é: %d", (x - y));
        break;
    case '*':
        printf("\nA multiplicação é: %d", (x * y));
        break;
    case '/':
        if(y == 0){
            printf("\nERRO! Não é possível realizar divisão por 0!");
        } else {
        printf("\nA divisão é: %d", (x / y));
        }
        break;
    default:
        printf("\nDigite uma das operações válidas!");
        break;
    }
}
//------------------------------------------------
/*QUESTÃO 05 ------------------------------------*/
int somatorio(int x){
    if(x < 0){
        printf("\nERRO! Valor negativo não possui somatório.\n");
        return 0;
    }

    if(x == 0){
        return 0;
    }

    int soma = 0;
    for(int i = 0; i <= x; i++){
        soma += i;
    }
    return soma;
}
/*FORMA RECURSIVA*/
int somatorioRecursivo(int k){
    if(k < 0){
        printf("\nERRO! Valor negativo não possui somatório.\n");
        return 0;
    }
    if(k == 0)
        return 0;
    return k + somatorioRecursivo(k - 1);
}
//------------------------------------------------
/*QUESTÃO 06 ------------------------------------*/
void imparesNoVetor(int vetor[], int tamanho){
    int contadorImpares = 0;
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % 2 != 0){
            contadorImpares++;
        }
    }
    printf("\nA quantidade de números ímpares no vetor é: %d\n", contadorImpares);
}
//------------------------------------------------
/*QUESTÃO 07 ------------------------------------*/
void maiorNumeroNoVetor(int vetor[], int quantidadeElem){
    int maior = vetor[0];

    for(int i = 0; i < quantidadeElem; i++){
        if(vetor[i] > maior)
            maior = vetor[i];
    }

    printf("\nO maior número no vetor é: %d", maior);
}
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

   /*3. Escreva um programa com uma função que receba dois números inteiros como entrada e 
    imprime na tela qual deles é o maior. */

    int n1, n2;

    printf("Digite dois números inteiros: \n");
    printf("Número 1: \n");
    scanf("%d", &n1);
    printf("\nNúmero 2: ");
    scanf("%d", &n2);

    maiorNumeroEh(n1, n2);

    printf("\n------ FIM DA QUESTÃO 03 ------\n");

    /*4. Escreva um programa com uma função que receba dois valores numéricos e um símbolo 
    matemático (“+”, “-”, “*” ou “/”). O símbolo determinará qual operação aritmética deverá ser 
    realizada entres os valores numéricos. Caso o símbolo fornecido para a função não seja um 
    dos 4 símbolos aritméticos, a função deverá exibir uma mensagem de erro.  */

    int num1, num2;
    char o;
    printf("\nDigite dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("Digite '+', '-', '*' ou '/' para fazermos uma operação: ");
    scanf(" %c", &o);

    operacao(num1, num2, o);

    printf("\n------ FIM DA QUESTÃO 04 ------\n");

    /*5. Escreva um programa com uma função que recebe como parâmetro de entrada um valor inteiro 
    e retorne como resultado o somatório de todos os números anteriores a este número até ZERO. 
    Caso seja digitado um valor negativo, a função deverá exibir uma mensagem de ERRO e 
    retorna o valor ZERO.  */

    int numero;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    printf("\nO somatório dos n números antes desse é: %d\n", somatorio(numero));
    printf("\nO somatório dos n números antes desse é (VERSÃO RECURSIVA): %d", somatorioRecursivo(numero));

    printf("\n------ FIM DA QUESTÃO 05 ------\n");

    /*6. Escreva um programa com uma função que recebe como parâmetro de entrada um vetor de 
    inteiros e retorna a quantidade de números ímpares do vetor.*/

    int tamanhoVetor;

    printf("\nQual o tamanho do vetor? ");
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];

    printf("\nDigite os elementos do vetor: \n");
    for(int i = 0; i < tamanhoVetor; i++)
        scanf("%d", &vetor[i]);
    
    printf("\nO vetor é\n");
    for(int i = 0; i < tamanhoVetor; i++)
        printf("%d ", vetor[i]);

    imparesNoVetor(vetor, tamanhoVetor);
    
    return 0;

    printf("\n------ FIM DA QUESTÃO 06 ------\n");

    /*7. Escreva um programa com uma função que recebe como parâmetro de entrada um vetor de 
    inteiros e retorna o valor do maior número dentro do vetor.*/

    int qntVetor;

    printf("\nQuantos elementos terá o vetor? ");
    scanf("%d", &qntVetor);

    int v[qntVetor];

    printf("\nDigite os elementos do vetor: ");
    for(int i = 0; i < qntVetor; i++)
        scanf("%d", &v[i]);
    
    printf("\nO vetor digitado é: \n");
    for(int i = 0; i < qntVetor; i++)
        printf("%d ", v[i]);
    
    maiorNumeroNoVetor(v, qntVetor);

    printf("\n------ FIM DA QUESTÃO 07 ------\n");

    /*8. Escreva um programa com uma função que recebe como parâmetro de entrada um vetor de 
    inteiros e retorna o somatório dos números pares dentro desse vetor. */

    // MESMA ESTRUTURA DAS ÚLTIMAS DUAS.

    printf("\n------ FIM DA QUESTÃO 08 ------\n");

    return 0;
}