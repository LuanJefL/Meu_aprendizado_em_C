/*Crie um programa que solicita e armazena nove valores inteiros em uma
matriz 3 x 3. Em seguida, exiba os elementos da matriz na ordem inversa.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int mat[3][3];

    for(int numero = 1, cont = 0; cont < 3; cont++) {
        for(int cont2 = 0; cont2 < 3; cont2++) {

            printf("Qual número deseja adicionar na posição %d:", numero);
            scanf("%d", &mat[cont][cont2]);
            numero++;

        }


    }

    for (int cont = 0; cont < 3; cont++) {
        for (int cont2 = 0; cont2 < 3; cont2++) {

            printf("| %d |", mat[cont][cont2]);

        }

        printf("\n");

    }

    printf("\n");

    for (int cont = 2; cont >= 0; cont--) {
        for (int cont2 = 2; cont2 >= 0; cont2--) {

            printf("| %d |", mat[cont][cont2]);

        }

        printf("\n");

    }







    return 0;

}