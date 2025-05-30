/*Faça um programa para calcular o volume de uma caixa retangular. Para isto, utilize
a seguinte fórmula:
𝑣𝑜𝑙𝑢𝑚𝑒 = 𝑐𝑜𝑚𝑝𝑟𝑖𝑚𝑒𝑛𝑡𝑜 × 𝑙𝑎𝑟𝑔𝑢𝑟𝑎 × 𝑎𝑙𝑡𝑢𝑟𝑎
Os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuário.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    double volume, comprimento, largura, altura;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o comprimento:");
    scanf("%lf", &comprimento);

    printf("Digite o largura:");
    scanf("%lf", &largura);

    printf("Digite o altura:");
    scanf("%lf", &altura);

    volume = comprimento * altura * largura;

    printf("O volume �: %lf", volume);


    return(0);
}