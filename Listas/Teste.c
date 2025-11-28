#include <stdio.h>
#include <windows.h>

/*QUESTÃO  ------------------------------------*/
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

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    /*5. Escreva um programa com uma função que recebe como parâmetro de entrada um valor inteiro 
    e retorne como resultado o somatório de todos os números anteriores a este número até ZERO. 
    Caso seja digitado um valor negativo, a função deverá exibir uma mensagem de ERRO e 
    retorna o valor ZERO.  */

    int numero;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    printf("\nO somatório dos n números antes desse é: %d", somatorio(numero));
    printf("\nO somatório dos n números antes desse é (VERSÃO RECURSIVA): %d", somatorioRecursivo(numero));
    
    return 0;
}


