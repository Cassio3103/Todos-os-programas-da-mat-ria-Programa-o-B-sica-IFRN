#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

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
        M[i][0] = notasArmazenadas[i][0];                          // Matrícula
        M[i][1] = notasArmazenadas[i][1];                          // Prova
        M[i][2] = notasArmazenadas[i][2];                          // Trabalho
        M[i][3] = M[i][1] + M[i][2];                               // Nota final
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

    return 0;
}
