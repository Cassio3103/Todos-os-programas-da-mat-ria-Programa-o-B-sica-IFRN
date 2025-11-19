#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*Lista 04 -  Vetores e Matrizes*/

    printf("\nVETORES:\n");

    /* 1. Escreva um programa que leia 10 valores inteiros e armazene em um vetor de 10 posições. O
    programa deve imprimir no terminal quantos valores pares foram digitados pelo usuário. Dica:
    use o operador “%” para verificar se o número é par (ZERO é neutro, NÃO É PAR)*/

    int posicoes[10];
    int pares = 0;
   
    for(int i = 0; i <= 9; i++){
        printf("\nDigite o valor na posição %d: ", i);
        scanf("%i", &posicoes[i]);

        if(i % 2 == 0){
            pares++;
        }
    }
    printf("\nOs valores digitados foram: ");
    for(int elem = 0; elem <= 9; elem++){
       printf("%i ", posicoes[elem]);
       
    }

    printf("\nForam digitados %i valores pares!", pares);

    printf("\n------ FIM DA QUESTÃO 01 ------\n");

    /* 2. Escreva um programa que leia a nota de 10 alunos. Em seguida imprima na tela qual foi a
    maior nota, a menor nota e a média das notas*/

    double notas[10];

    for(int i = 0; i < 10; i++){
        printf("\nDigite a nota do aluno %d: ", i);
        scanf("%lf", &notas[i]);
    }

    printf("\nAs notas digitadas foram: ");
    for(int i = 0; i < 10; i++)
       printf("%.2lf ", notas[i]);
    
    double maiorNota = notas[0];
    double menorNota = notas[0];

    for(int j = 1; j < 10; j++){
        if(notas[j] > maiorNota){
            maiorNota = notas[j];
        }
        if(notas[j] < menorNota){
            menorNota = notas[j];
        }
    }

    printf("\n\nA maior nota é: %.2lf", maiorNota);
    printf("\nA menor nota é: %.2lf\n", menorNota);

    printf("\n------ FIM DA QUESTÃO 02 ------\n");

    printf("\nQUESTÃO BÔNUS QUE SE PARECE COM A ÚLTIMA: ");

    float altura, maior, menor;

    printf("\nDigite a altura da pessoa 1: ");
    scanf("%f", &altura);

    maior = altura;
    menor = altura;

    for (int i = 2; i <= 10; i++) {
        printf("\nDigite a altura da pessoa %0.2lf: ", i);
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

    printf("\n------ FIM DA QUESTÃO BÔNUS ------\n");

    /*3. Escreva um programa que leia 10 valores inteiros e armazene 5 em um vetor (vet1) e 5 em
    outro vetor (vet2). Em seguida armazene o resultado da soma dos números pares dos dois
    vetores (vet1 e vet2) em uma variável somaPAR e o resultado da soma dos números ímpares
    dos dois vetores (vet1 e vet2) em uma variável somaIMPAR. Ao final exiba os valores de
    somaPAR e somaIMPAR*/

    int vet1[5];
    int vet2[5];
    int somaPAR = 0, somaIMPAR = 0;

    printf("\nDigite 5 valores inteiros: ");
    for(int i = 0; i < 5; i++){
        scanf("%i", &vet1[i]);
    }

    printf("\nDigite mais 5 valores inteiros: ");
    for(int j = 0; j < 5; j++){
        scanf("%i", &vet2[j]);
    }

    printf("\nOs valores digitados foram: ");
    for(int k = 0; k < 5; k++){
        printf("%i ", vet1[k]);
    }
    
    for(int k = 0; k < 5; k++){
        printf("%i ", vet2[k]);
    }

    /*Testando um laço para fazer 10 iterações*/

    /*for(int i = 0; i < 10; i++){
        printf("%i ", vet1[i]);
        printf("%i ", vet2[i]);
    }*/

    // O laço for anterior fica alternando entre os vetores;

    printf("\nO somatório dos valores pares digitados foi: ");
    for(int k = 0; k <= 10; k++){
        if(k % 2 == 0){
            somaPAR += k;
        }
    }

    printf("%i", somaPAR);

    printf("\nO somatório dos valores impares digitados foi: ");
    for(int k = 0; k <= 10; k++){
        if(k % 2 != 0){
            somaIMPAR += k;
        }
    }
    
    printf("%i", somaIMPAR);

    printf("\n------ FIM DA QUESTÃO 03 ------\n");

    printf("\nMATRIZES:\n");

    /* 4. Escreva um programa que leia 9 valores inteiros e armazene em uma matriz 3x3. O programa
    deve e escrever quantos valores ímpares foram digitados pelo usuário. Dica: use o operador
    “%” para verificar se o número é ímpar*/

    int matriz[3][3];
    int contador = 0;

    printf("\nDigite os elementos da Matriz: ");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            scanf("%i", &matriz[linha][coluna]);
        }
    }

    printf("\nA matriz digitada é: \n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("%i ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            if(matriz[linha][coluna] % 2 != 0){
                contador++;
            }
        }
    }

    printf("\nForam digitados %i valores impares!", contador);

    printf("\n------ FIM DA QUESTÃO 04 ------\n");

    /*5. Escreva um programa que armazene valores inteiros em duas matrizes A e B de tamanho 3x3.
    Em seguida gere uma terceira matriz C 3x3 formada pelos maiores valores de cada posição
    comparando as duas primeiras matrizes A e B.*/

    int A[3][3];
    int B[3][3];
    int C[3][3];


    //ENTRADAS DE DADOS PARA AS MATRIZES A E B:

    printf("\nPARA A MATRIZ A:");

    printf("\nDigite os elementos de A: ");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            scanf("%i", &A[linha][coluna]);
        }
    }

    printf("\nPARA A MATRIZ B:");

    printf("\nDigite os elementos de B: ");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            scanf("%i", &B[linha][coluna]);
        }
    }

    // IMPRESSÃO DE MATRIZES
    /*----------------------------------------------------------------*/

    printf("\nMATRIZ A: \n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("%i ", A[linha][coluna]);
        }
        printf("\n");
    }


    printf("\nMATRIZ B: \n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("%i ", B[linha][coluna]);
        }
        printf("\n");
    }

    //A MATRIZ C
    /*---------------------------------------------------------------*/

    /*Explicação: Vamos comparar uma posição nas duas matrizes. Por exemplo entre a1x1 e b1x1
    , qual valor é maior? Pegaremos o maior valor e atribuíremos a c1x1*/

    for(int LIN = 0; LIN < 3; LIN++){
        for(int COL = 0; COL < 3; COL++){
            if(A[LIN][COL] > B[LIN][COL])
                C[LIN][COL] = A[LIN][COL];
            else 
                C[LIN][COL] = B[LIN][COL];           
        }
    }

    printf("\nA matriz C com os maiores valores entre A e B é: \n");
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf ("%i ", C[linha][coluna]);
        }
        printf("\n");
    }

    printf("\n------ FIM DA QUESTÃO 04 ------\n");

    /* 6. Escreva um programa que armazene valores inteiros em uma matriz de 5 linhas e 4 colunas
    contendo as seguintes informações sobre os alunos de uma disciplina, sendo todas as
    informações do tipo inteiro:

    • Primeira coluna: número de matrícula (use um inteiro com 4 números)
    • Segunda coluna: nota da prova (0 ~ 70)
    • Terceira coluna: nota do trabalho (0 ~ 30)
    • Quarta coluna: nota final (nota da prova + nota do trabalho)

    Elabore um programa que:
    a) Leia as três primeiras informações de cada aluno
    b) Calcule a nota final de cada aluno e armazene o valor na respectiva linha da matriz
    c) Informe a matrícula do aluno com maior nota
    d) Informe a média das notas finais dos cinco alunos*/

    int M[5][4];
    // Matriz auxiliar: matricula, prova, trabalho        
    int notasArmazenadas[5][3];  

    printf("\nDigite na seguinte ordem: 'Matrícula'; 'Nota prova'; 'Nota trabalho'.\n");
    printf("A nota final será calculada automaticamente!\n");

    // a)
    for (int linha = 0; linha < 5; linha++) {
        printf("\n--- Aluno %d ---\n", linha + 1);

        for (int coluna = 0; coluna < 3; coluna++) {
            scanf("%d", &notasArmazenadas[linha][coluna]);
        }
    }

    // b)
    for (int i = 0; i < 5; i++) {
        M[i][0] = notasArmazenadas[i][0]; // Matrícula
        M[i][1] = notasArmazenadas[i][1]; // Prova
        M[i][2] = notasArmazenadas[i][2]; // Trabalho
        M[i][3] = M[i][1] + M[i][2];      // Nota final
    }

    // c)
    int maiorNota = M[0][3];
    int matriculaMaior = M[0][0];

    for (int i = 1; i < 5; i++) {
        if (M[i][3] > maiorNota) {
            maiorNota = M[i][3];
            matriculaMaior = M[i][0];
        }
    }

    // d) 
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += M[i][3];
    }
    float media = soma / 5.0;

    // A matriz é:
    printf("\nMatriz M:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior nota final: %d (matrícula %d)\n", maiorNota, matriculaMaior);
    printf("Média das notas finais: %.2f\n", media);

    printf("\n------ FIM DA QUESTÃO 04 ------\n");

    return 0;
}