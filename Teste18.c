/*Escreva um programa que exibe o somatório dos valores pares existentes na faixa
de 1 (inclusive) até 500 (inclusive)*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int contador = 1, soma = 0;

    while(contador != 500) {

        contador++;

        if ((contador % 2) == 0) {

            soma += contador;

        }

        
    }

    printf("%d ", soma);


    return 0;
}