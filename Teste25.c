/*Implemente uma função, sem retorno, que recebe um valor inteiro por parâmetro e
informa se é, ou não, igual a zero.*/

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

    if (numero == 0) {

        printf("Ele é igual 0");

    }
    
    else {

        printf("Ele é diferente de 0");

    }

}