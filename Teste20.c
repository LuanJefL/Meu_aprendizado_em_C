/*Escreva um programa que exibe os números divisíveis por 2 existentes no intervalo
de 10 (inclusive) a 50 (inclusive). Ao final, o programa deve informar o total de
números que foram exibidos. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int contador = 10, numeros_pares = 0;

    while(contador <= 50) {

        if((contador % 2) == 0) {

            printf("%d ", contador);
            numeros_pares++;

        }

        

        contador++;

    }

    printf("\n\n%d", numeros_pares);

    return 0;
}