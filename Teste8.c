/*A cotação do dólar influencia na economia brasileira e muitos economistas se
encarregam de calcular, muitas vezes de forma manual, o valor do real em dólar.
Você foi contratado por um economista para automatizar a conversão de reais em
dólares. Crie um programa que solicita e lê a cotação do dólar atual e o valor em real
a ser convertido e, em seguida, calcula e exibe o resultado da conversão. */


#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    //Se lembre que quando for digitar com tradução, tem que colocar vírgula e o código continua com ponto

    double c_dolar, real, conversao;

    
    printf("Qual a cotação do dolár?:");
    scanf(" %lf", &c_dolar);


    printf("\nQual a quantidade de reais que você quer saber a conversão?:");
    scanf(" %lf", &real);

    conversao = real * c_dolar;

    printf("\nO resultado da conversão foi de: %lf", conversao);



    return(0);
}
