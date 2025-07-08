/*Escreva um programa que solicita e armazena oito valores inteiros em um vetor,
denominado de vet, e exibe os valores armazenados, porém na ordem inversa.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int quant = 4;
    int numero, cont, lista[quant];

    for(cont = 0; cont < quant; cont++) {

        printf("Qual número vai adicionar?");
        scanf("%d", &lista[cont]);

    }

    for(cont = (quant - 1); cont >= 0; cont-- ) {


        printf("| %d |", lista[cont]);

    }


    return 0;

}