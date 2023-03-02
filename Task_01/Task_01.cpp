#include <iostream>

using namespace std;

int inverter(int n, int resultado = 0) {
    if (n == 0) {
        return resultado;
    }
    else {
        resultado = resultado * 10 + n % 10;
        return inverter(n / 10, resultado);
    }
}


//2ª 
int somatorio(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + somatorio(n - 1);
    }
}
//3ª

//4ª
void imprimir(int n, int resultado =1) {
    if (resultado == n) {
        cout<<resultado;
    }else{

        cout << resultado << " ";
        resultado = resultado++;
        return imprimir(n, resultado);
    }
}


int main()
{
    // crie uma função recursiva que permita inverter um número inteiro qualquer. Ex.123 -> 321
    //# crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório de 1 a N.
    // crie um programa recursivo que inverta a ordem dos valores de um vetor lido de 100 posições;
    // faça um função recursiva que receba um inteiro N e imprima todos os naturais de 0 a N.
    // O fatorial quadruplo de um número N é definido (2n)!/n!, faca uma função recursiva que receba um inteiro N e calcule este fatorial Quadrúplo.


    //cout<<somatorio(5);
   // cout << inverter(123);
   imprimir(123);

    return 0;
}