/*Escreva um programa que solicita e armazena dez números inteiros em um vetor e,
ao final, informa o maior valor encontrado no vetor.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int cont, lista[10], maior;

    for (cont = 0; cont < 8; cont++) {

        printf("Qual número deseja adicionar?");
        scanf("%d", &lista[cont]);

    }

    /*for (cont = 0; cont < 8; cont++) {

        printf("| %d |", lista[cont]);

    }*/

    maior = lista[0];

    for (cont = 0; cont < 8; cont++) {

        if(maior < lista[cont]) {

            maior = lista[cont];

        }


    }

    printf("O maior número foi %d", maior);


    return 0;

}