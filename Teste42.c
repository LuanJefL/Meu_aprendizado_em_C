/*Elabore um programa que solicita e armazena tr�s notas de cinco alunos em uma
matriz 5 x 3. Em seguida, o programa deve exibir uma mensagem com a m�dia
aritm�tica de cada aluno.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float mat[5][3], vetmedia[5];

    for(int numero = 1, cont = 0; cont < 5; cont++) {
        for(int cont2 = 0; cont2 < 3; cont2++) {

            printf("Qual n�mero deseja adicionar na posi��o %d:", numero);
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

        printf("A m�dia do aluno %d � %f:", numero ,vetmedia[cont]);
        numero++;
        printf("\n");

    }


    return 0;

}