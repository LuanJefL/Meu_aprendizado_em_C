/*Crie uma fun��o, sem retorno, que recebe um valor inteiro por par�metro e informa
se ele � positivo, negativo ou neutro.*/

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

    if (numero > 0) {

        printf("Ele � maior que 0");

    }
    else if (numero < 0) {

        printf("Ele � menor que 0");

    }
    else {

        printf("Ele � igual a 0");

    }



}