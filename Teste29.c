/*Construa uma fun��o, sem retorno, que recebe um valor inteiro por par�metro e
informa se ele �, ou n�o, m�ltiplo de 5.*/


#include <stdio.h>
#include <locale.h>

void multiplo(int numero);

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Qual n�mero que voc� quer saber a divisibilidade por 5?");
    scanf("%d", &numero);

    multiplo(numero);


    return 0;

}

void multiplo(int numero) {

    if ((numero % 5) == 0) {

        printf("Ele � m�ltiplo de 5");

    }
    else{

        printf("Ele n�o � m�ltiplo de 5");

    }


}