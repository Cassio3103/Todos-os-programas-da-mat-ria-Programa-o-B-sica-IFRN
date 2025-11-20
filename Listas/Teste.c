#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


    double v_sensores[10];

    printf("\nDigite 10 entradas de sensores para verificação: \n");
    for(int i = 0; i < 10; i++){
        scanf("%lf", &v_sensores[i]);
    }

    for(int i = 0; i < 10; i++){

        if(v_sensores[i] < 0 && v_sensores[i] > 100){
            printf("Leitura anômala detectada na posição %0.lf: %0.2lf", i,  v_sensores[i]);
        }
    }

    return 0;
}


