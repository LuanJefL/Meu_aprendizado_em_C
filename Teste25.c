/*Implemente uma fun��o, sem retorno, que recebe um valor inteiro por par�metro e
informa se �, ou n�o, igual a zero.*/

#include <stdio.h>
#include <locale.h>

void verificador(int numero);

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Qual o n�mero que voc� deseja saber se � menor ou maior que 0?");
    scanf("%d", &numero);

    verificador(numero);

    return (0);

}

void verificador(int numero) {

    if (numero == 0) {

        printf("Ele � igual 0");

    }
    
    else {

        printf("Ele � diferente de 0");

    }

}