/*Fa�a uma fun��o, sem retorno, que recebe um valor inteiro por par�metro, verifica e
informa se tal n�mero � par ou �mpar*/

#include <stdio.h>
#include <locale.h>

void verificador(int numero); 

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Qual o n�mero que voc� quer saber se � impar ou par?");
    scanf("%d", &numero);

    verificador(numero);


    return (0);

}

void verificador(int numero) {

    if (((numero % 2) == 0) && (numero != 0)) {

        printf("Ele � par");

    }
    else if (((numero % 2) == 1) && (numero != 0)) {

        printf("Ele � impar");

    }
    else {

        printf("� zero!!!");

    }



}