/*Escreva um programa que solicita e l� um valor inteiro e informa se ele � positivo,
negativo ou neutro.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Qual o n�mero que voc� quer saber se � negativo, positivo ou neutro:");
    scanf("%d", &numero);

    if (numero < 0) { 
        printf("Esse n�mero � negativo!");
    } 
    else if (numero > 0) {
        printf("Esse n�mero � positivo!"); 
    }
    else {
        printf("Esse n�mero � neutro");
    }




    return 0;

}