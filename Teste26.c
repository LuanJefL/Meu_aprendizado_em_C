/*Crie uma função, sem retorno, que recebe um valor inteiro por parâmetro e informa
se ele é positivo, negativo ou neutro.*/

#include <stdio.h>
#include <locale.h>

void verificador(int numero);

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Qual o número que você deseja saber se é menor ou maior que 0?");
    scanf("%d", &numero);

    verificador(numero);

    return (0);

}

void verificador(int numero) {

    if (numero > 0) {

        printf("Ele é maior que 0");

    }
    else if (numero < 0) {

        printf("Ele é menor que 0");

    }
    else {

        printf("Ele é igual a 0");

    }



}