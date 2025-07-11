/*Crie um programa que solicita e armazena n × m números inteiros em uma matriz n
× m, denominada de A, onde n e m também devem ser fornecidos pelo usuário.
Construa outra matriz, denominada de B, do mesmo tipo e tamanho de A, onde cada
elemento de B deve ser definido pela multiplicação do elemento correspondente de
A por 3, ou seja, B[i][j] deve ser igual a A[i][j] * 3, onde i e j correspondem aos
índices das matrizes. Dessa forma, se A = [
3 2 1
4 0 5
8 6 9
], teremos B = [
9 6 3
12 0 15
24 18 27
].
Ao final, o programa deve exibir o conteúdo de A e B.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int n, m;

    printf("Qual o tamanho da matriz em linhas:");
    scanf("%d", &n);
    printf("Qual o tamanho da matriz em comprimento:");
    scanf("%d", &m);

    int A[n][m], B[n][m];

    for(int numero = 1, cont = 0; cont < n; cont++) {
        for(int cont2 = 0; cont2 < m; cont2++) {

            printf("Qual número deseja adicionar na posição %d:", numero);
            scanf("%d", &A[cont][cont2]);
            numero++;

        }


    }

    for(int cont = 0; cont < n; cont++) {
        for(int cont2 = 0; cont2 < m; cont2++) {

            B[cont][cont2] = A[cont][cont2] * 3;

        }


    }

    for(int cont = 0; cont < n; cont++) {
        for(int cont2 = 0; cont2 < m; cont2++) {

            printf("| %d |", A[cont][cont2]);

        }

        printf("\n");

    }

    printf("\n");

    for(int cont = 0; cont < n; cont++) {
        for(int cont2 = 0; cont2 < m; cont2++) {

            printf("| %d |", B[cont][cont2]);

        }

        printf("\n");

    }





    return 0;

}