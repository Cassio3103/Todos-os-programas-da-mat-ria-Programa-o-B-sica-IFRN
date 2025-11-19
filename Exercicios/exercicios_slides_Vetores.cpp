#include <iostream>
#include <windows.h>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*Escrevendo um programa que leia 5 valores e imprima na tela os valores 
    que são múltiplos de 3.*/

    vector<int> valores(5);

    cout << "\nDigite 5 valores inteiros: ";
    for(int& elem : valores){
        cin >> elem;
    }

    cout << "\nOs valores na lista são: ";
    for(int elem : valores){
        cout << elem << " ";
    }

    cout << "\nOs valores múltiplos de 3 na lista são: ";
    for(int elem : valores){
        if(elem % 3 == 0){
            cout << elem << " ";
        }
    }

    cout << " ";

    /*Usando arrays, a diferença é que teriamos a seguinte declaração: int valores[5]*/

    /*Escreva um algoritmo que leia 5 valores inteiros e imprima na tela o resultado 
    deles ao quadrado:*/

    int v[5];

    cout << "\nDigite 5 valores inteiros: ";
    for(int elem = 0; elem <= 4; elem++){
        cin >> v[elem];
    }


    cout << "\nOs elementos na lsita são: ";
    for(int elem : v){
        cout << elem << " ";
    }

    cout << "\nOs elementos ao quadrado da lista são: ";
    for(int elem : v)
        cout << elem * elem << " ";



    return 0;
}