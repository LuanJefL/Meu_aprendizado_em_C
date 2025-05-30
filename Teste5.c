/*FaÃ§a um programa que solicita e lÃª dois nÃºmeros, calcula e exibe o dobro do
primeiro e o triplo do segundo.

Isso Ã© de uma atividade
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    double numero, dobro, triplo;

    printf("Qual o número");
    scanf("%lf", &numero);

    dobro = numero * 2;
    triplo = numero * 3;

    printf("\nO dobro é: %lf", dobro);
    printf("\nO triplo é: %lf", triplo);

    return(0);
}