/*Faça um programa que solicita e lê dois números, calcula e exibe o dobro do
primeiro e o triplo do segundo.

Isso é de uma atividade
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    double numero, dobro, triplo;

    printf("Qual o n�mero");
    scanf("%lf", &numero);

    dobro = numero * 2;
    triplo = numero * 3;

    printf("\nO dobro �: %lf", dobro);
    printf("\nO triplo �: %lf", triplo);

    return(0);
}