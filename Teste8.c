/*A cota��o do d�lar influencia na economia brasileira e muitos economistas se
encarregam de calcular, muitas vezes de forma manual, o valor do real em d�lar.
Voc� foi contratado por um economista para automatizar a convers�o de reais em
d�lares. Crie um programa que solicita e l� a cota��o do d�lar atual e o valor em real
a ser convertido e, em seguida, calcula e exibe o resultado da convers�o. */


#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    //Se lembre que quando for digitar com tradu��o, tem que colocar v�rgula e o c�digo continua com ponto

    double c_dolar, real, conversao;

    
    printf("Qual a cota��o do dol�r?:");
    scanf(" %lf", &c_dolar);


    printf("\nQual a quantidade de reais que voc� quer saber a convers�o?:");
    scanf(" %lf", &real);

    conversao = real * c_dolar;

    printf("\nO resultado da convers�o foi de: %lf", conversao);



    return(0);
}
