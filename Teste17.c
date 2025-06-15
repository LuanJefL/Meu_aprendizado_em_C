/*Faça um programa que exibe, em ordem decrescente, os 500 primeiros números
inteiros positivos. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int contador = 500;

    while(contador != 0) {

        printf("%d ", contador);
        contador--;

    }


    return 0;
}