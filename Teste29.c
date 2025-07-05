/*Construa uma função, sem retorno, que recebe um valor inteiro por parâmetro e
informa se ele é, ou não, múltiplo de 5.*/


#include <stdio.h>
#include <locale.h>

void multiplo(int numero);

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Qual número que você quer saber a divisibilidade por 5?");
    scanf("%d", &numero);

    multiplo(numero);


    return 0;

}

void multiplo(int numero) {

    if ((numero % 5) == 0) {

        printf("Ele é múltiplo de 5");

    }
    else{

        printf("Ele não é múltiplo de 5");

    }


}