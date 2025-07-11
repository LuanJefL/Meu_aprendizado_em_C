/*2. Faça um programa que solicita e armazena seis números inteiros em uma
matriz 2 x 3, denominada de A, e solicita e armazena seis números inteiros em outra
matriz 2 x 3, denominada de B. Em seguida, exiba a soma dessas matrizes.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int mat[2][3], mat2[2][3], matx[2][3];





    for(int numero = 1, cont = 0; cont < 2; cont++) {
        for(int cont2 = 0; cont2 < 3; cont2++) {

            printf("Qual número deseja adicionar na posição %d:", numero);
            scanf("%d", &mat[cont][cont2]);
            numero++;

        }


    }

    for(int numero = 1, cont = 0; cont < 2; cont++) {
        for(int cont2 = 0; cont2 < 3; cont2++) {

            printf("Qual número deseja adicionar na matrix 2 posição %d:", numero);
            scanf("%d", &mat2[cont][cont2]);
            numero++;

        }


    }

    for(int cont = 0; cont < 2; cont++) {
        for(int cont2 = 0; cont2 < 3; cont2++) {

            matx[cont][cont2] = mat[cont][cont2] + mat2[cont][cont2];

        }

    }

    for (int cont = 0; cont < 2; cont++) {
        for (int cont2 = 0; cont2 < 3; cont2++) {

            printf("| %d |", mat[cont][cont2]);

        }

        printf("\n");

    }

    printf("\n");

    for (int cont = 0; cont < 2; cont++) {
        for (int cont2 = 0; cont2 < 3; cont2++) {

            printf("| %d |", mat2[cont][cont2]);

        }

        printf("\n");

    }

    printf("\n");

    for (int cont = 0; cont < 2; cont++) {
        for (int cont2 = 0; cont2 < 3; cont2++) {

            printf("| %d |", matx[cont][cont2]);

        }

        printf("\n");

    }




    return 0;

}