/*Escreva um programa que solicita e armazena oito números reais em uma
matriz 4 × 2, denominada de A. Construa outra matriz, denominada de B, do
mesmo tipo e tamanho de A, e com os mesmos elementos armazenados em A,
porém de forma invertida. Ou seja, o primeiro elemento de A passa a ser o último
de B, o segundo elemento de A passa a ser o penúltimo de B e assim por diante. Ao
final, o programa deve exibir o conteúdo de A e B.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float A[4][2], B[4][2], vet[8];

    for(int numero = 1, cont = 0; cont < 4; cont++) {
        for(int cont2 = 0; cont2 < 2; cont2++) {

            printf("Qual número deseja adicionar na posição %d:", numero);
            scanf("%f", &A[cont][cont2]);
            numero++;

        }


    }

    /*for (int cont = 0; cont < 4; cont++) {
        for (int cont2 = 0; cont2 < 2; cont2++) {

            printf("| %f |", A[cont][cont2]);

        }

        printf("\n");

    }*/

    for (int cont = 3, contreverso = 0; cont >= 0; contreverso++, cont--) {
        for (int cont2 = 1, contreverso2 = 0; cont2 >= 0; contreverso2++, cont2--) {

            B[contreverso][contreverso2] = A[cont][cont2];

        }
    }

    printf("\n");

    for (int cont = 0; cont < 4; cont++) {
        for (int cont2 = 0; cont2 < 2; cont2++) {

            printf("| %f |", B[cont][cont2]);

        }

        printf("\n");

    }


    return 0;

}