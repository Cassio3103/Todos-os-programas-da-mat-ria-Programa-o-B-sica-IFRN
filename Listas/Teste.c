#include <stdio.h>
#include <windows.h>

void maiorNumeroNoVetor(int vetor[], int quantidadeElem){
    int maior = vetor[0];

    for(int i = 0; i < quantidadeElem; i++){
        if(vetor[i] > maior)
            maior = vetor[i];
    }

    printf("\nO maior número no vetor é: %d", maior);
}


int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    /*7. Escreva um programa com uma função que recebe como parâmetro de entrada um vetor de 
    inteiros e retorna o valor do maior número dentro do vetor. */
    
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
    
    return 0;
}


