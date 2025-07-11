/*Elabore um programa que solicita e armazena três notas de cinco alunos em uma
matriz 5 x 3. Em seguida, o programa deve exibir uma mensagem com a média
aritmética de cada aluno.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float mat[5][3], vetmedia[5];

    for(int numero = 1, cont = 0; cont < 5; cont++) {
        for(int cont2 = 0; cont2 < 3; cont2++) {

            printf("Qual número deseja adicionar na posição %d:", numero);
            scanf("%f", &mat[cont][cont2]);
            numero++;

        }
    }

    /*for(int numero = 1, cont = 0; cont < 5; cont++) {
        for(int cont2 = 0; cont2 < 3; cont2++) {

            printf("| %f |", mat[cont][cont2]);

        }

        printf("\n");

    }*/

    for (int cont = 0; cont < 5; cont++) {
        
        vetmedia[cont] = (mat[cont][0] + mat[cont][1] + mat[cont][2]) / 3;

    }

    for (int numero = 1, cont = 0; cont < 5; cont++) {

        printf("A média do aluno %d é %f:", numero ,vetmedia[cont]);
        numero++;
        printf("\n");

    }


    return 0;

}