#include <iostream>
using namespace std;

int main(){

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

    cout << "\nOs elementos ao quadrado da ista são: ";
    for(int elem : v)
        cout << elem * elem << " ";


    return 0;
}