#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    double Celsius, Fahrenheit;

    printf("Qual a temperatura em Celsius?:");
    scanf("%lf", &Celsius);

    Fahrenheit = (Celsius * 1.8) + 32;

    printf("\nA temperatura em Fahrenheit é: %lf", Fahrenheit, "\n");



    return(0);
}