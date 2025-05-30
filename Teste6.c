/*Escreva um programa que solicita e lÃª um nÃºmero, calcula e exibe o seu cubo.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    int numero, cubo;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número que você quer saber o cubo: ");
    scanf("%d", &numero);

    cubo = pow(numero, 3);

    printf("\nO cubo é: %d", cubo);


    return(0);
}