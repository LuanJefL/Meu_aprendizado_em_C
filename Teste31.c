/*Faça uma função, com retorno, para calcular o volume de uma caixa retangular,
utilizando a seguinte fórmula:
???????????? = ?????????????????????? × ?????????????? × ????????????
Obs.: os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuário e devem ser passados como argumento para a função. A função main deve
receber e exibir o resultado do cálculo.*/

#include <stdio.h>
#include <locale.h>

int area_retangulo(int comprimento, int largura, int altura);

int main() {

    setlocale(LC_ALL, "Portuguese");

    int comprimento, largura, altura;

    printf("Qual o comprimento?");
    scanf("%d", &comprimento);

    printf("Qual o altura?");
    scanf("%d", &altura);

    printf("Qual o largura?");
    scanf("%d", &largura);

    printf("A área do retângulo é %d", area_retangulo(comprimento, altura, largura));

    return (0);

}

int area_retangulo(int comprimento, int largura, int altura) {

    int volume;

    volume = comprimento * largura * altura;

    return volume;

}