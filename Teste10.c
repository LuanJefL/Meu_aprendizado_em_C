/*Você foi procurado por uma nutricionista para automatizar o cálculo do Índice de
Massa Corpórea (IMC) de seus pacientes. Para isto, crie um programa que solicita e
lê o peso e a altura de uma pessoa e apresenta seu IMC com duas casas decimais
após a vírgula. O IMC é calculado por meio da seguinte fórmula:*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    double imc, peso, altura;

    setlocale(LC_ALL, "Portuguese");

    printf("Qual a altura em metros?:");
    scanf("%lf",&altura);

    printf("Qual o peso em kg?:");
    scanf("%lf",&peso);
    
    imc = peso / pow(altura, 2);

    printf("O imc resultante foi: %lf", imc);

    return(0);
}