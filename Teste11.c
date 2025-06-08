/*Um feirista vende suas ma√ßas a R$ 1,30 por unidade, se forem compradas menos de
uma d√∫zia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma d√∫zia.
Sabendo disso, crie um programa que solicita e l√™ a quantidade de ma√ßas desejadas,
calcula e informa o pre√ßo a ser pago pelo cliente, considerando os pre√ßos definidos
anteriormente.
*/

//06/06/25

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int maca_q;
    float preco, preco_final;


    printf("Qual a quantidade de maÁa que vocÍ quer comprar?:");
    scanf("%d", &maca_q);

    if (maca_q < 12) {

        preco = 1.3;

        preco_final = preco * maca_q;

        printf("\nO preÁo final foi: %f", preco_final);

    }

    else {

        preco = 1.1;

        preco_final = preco * maca_q;

        printf("\nO preÁo final foi: %f", preco_final);


    }


    return 0;
}