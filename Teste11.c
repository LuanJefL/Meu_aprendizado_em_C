/*Um feirista vende suas maças a R$ 1,30 por unidade, se forem compradas menos de
uma dúzia, e a R$ 1,10 por unidade, se forem compradas pelo menos uma dúzia.
Sabendo disso, crie um programa que solicita e lê a quantidade de maças desejadas,
calcula e informa o preço a ser pago pelo cliente, considerando os preços definidos
anteriormente.
*/

//06/06/25

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int maca_q;
    float preco, preco_final;


    printf("Qual a quantidade de ma�a que voc� quer comprar?:");
    scanf("%d", &maca_q);

    if (maca_q < 12) {

        preco = 1.3;

        preco_final = preco * maca_q;

        printf("\nO pre�o final foi: %f", preco_final);

    }

    else {

        preco = 1.1;

        preco_final = preco * maca_q;

        printf("\nO pre�o final foi: %f", preco_final);


    }


    return 0;
}