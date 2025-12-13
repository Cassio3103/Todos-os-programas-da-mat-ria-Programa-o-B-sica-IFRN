#include <iostream>
#include <windows.h>
#include <math.h>
using std::cout;
using std::cin;

// PROTÓTIPOS DE FUNÇÕES
float calcularDelta(float a, float b, float c);
void raizes(float a, float b, float c);
void funcaoSegundoGrau(float a, float b, float c);


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout << "\nSlides de funções\n";

    /*1. Escreva uma função que recebe o valor de 3 números (a, b e c) e como resultado
    retorna o valor calcularDelta (b2 – 4ac).*/

    float x, y, z;

    cout << "\nDigite os valores de a, b e c para o cálculo de calcularDelta: ";
    cin >> x >> y >> z;

    cout << "\nO delta é: " << calcularDelta(x, y, z);

    /*2. Usando a função do exercício anterior, crie uma função que calcule as raízes de uma
    equação do segundo grau. Nos casos de equações com raízes imaginárias, informar que
    não existem raízes reais*/

    raizes(x, y, z);

    /*3. Escreva um programa para cálculo de equações do segundo grau. O programa deve
    solicitar os valores dos coeficientes a, b e c; calcular as raízes; e exibir o valor de y, a
    partir dos valores de a, b, c e x fornecidos pelo usuário.
        1. Cálculo equação 2o: y = a*x2 + b*x + c*/

    funcaoSegundoGrau(x, y, z);

    return 0;
}

// FUNÇÕES

float calcularDelta(float a, float b, float c){
    float calculo = ((b*b) - 4*a*c);
    return calculo;
}

void raizes(float a, float b, float c){
    float x1, x2;
    float delta = calcularDelta(a,b,c);

    if(delta > 0){
        x1 = (-b + sqrt(delta)/2*a);
        x2 = (-b - sqrt(delta))/2*a;
        cout << "\nAs raízes são: " << x1 << " e " << x2;
    } else if (delta == 0){
        x2 = (-b - sqrt(delta))/(2*a);
        x1 = x2;
        cout << "\nAs raízes são: " << x1 << " e " << x2;
    } else {
        cout << "\nNão há raízes no conjunto dos Reais que satisfaça o cálculo!\n";
    }

}

void funcaoSegundoGrau(){
    float a, b, c, x, y;
    
    cout << "\nQuais são os valores de a, b e c: ";
    cin >> a >> b >> c;
    cout << "Qual o valor de x: ";
    cin >> x;

    y = a*(x*x) + b*x + c;

    cout << "\nA função do segundo grau é: " << y;
}