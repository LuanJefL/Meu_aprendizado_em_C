/*Escreva um programa que solicita e lê um valor inteiro e informa se ele é positivo,
negativo ou neutro.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Qual o número que você quer saber se é negativo, positivo ou neutro:");
    scanf("%d", &numero);

    if (numero < 0) { 
        printf("Esse número é negativo!");
    } 
    else if (numero > 0) {
        printf("Esse número é positivo!"); 
    }
    else {
        printf("Esse número é neutro");
    }




    return 0;

}