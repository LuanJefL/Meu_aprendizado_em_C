/*Faça uma função, sem retorno, que recebe um valor inteiro por parâmetro, verifica e
informa se tal número é par ou ímpar*/

#include <stdio.h>
#include <locale.h>

void verificador(int numero); 

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Qual o número que você quer saber se é impar ou par?");
    scanf("%d", &numero);

    verificador(numero);


    return (0);

}

void verificador(int numero) {

    if (((numero % 2) == 0) && (numero != 0)) {

        printf("Ele é par");

    }
    else if (((numero % 2) == 1) && (numero != 0)) {

        printf("Ele é impar");

    }
    else {

        printf("É zero!!!");

    }



}