/*Fa�a um programa para calcular e exibir a m�dia aritm�tica e o conceito de 10
alunos. Para cada um dos alunos, o programa deve solicitar e ler as notas das tr�s
provas, calcular e exibir a m�dia aritm�tica e informar o conceito obtido, de acordo
com a tabela a seguir:
M�dia Conceito
>= 9 A
>= 7 e < 9 B
>= 6 e < 7 C
>= 4 e < 6 D
< 4 E
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    float nota, soma = 0, media = 0;
    int contador = 0, contador_nota = 0;


    while(contador != 10) {

        contador++;

        while(contador_nota != 3) {

            contador_nota++;

            printf("Qual foi a nota da prova %d", contador_nota); 
            printf(" ");
            scanf("%f", &nota);

            /*printf("%f\n", nota);
            printf("%f\n", soma);
            printf("%f\n", media);*/

            soma += nota;
            
            if (contador_nota == 3) {

                media = soma / 3;
                soma = 0;
                printf("%f", media);
                printf("\n");

            }

            nota = 0;

        }

        if(media >= 9) {

            printf("\nSua nota � A\n\n");

        }

        else if((media >= 7) && (media < 9)) {

            printf("\nSua nota � B\n\n");

        }

        else if((media >= 6) && (media < 7)) {

            printf("\nSua nota � C\n\n");

        }

        else if((media >= 4) && (media < 6)) {

            printf("\nSua nota � D\n\n");

        }

        else {

            printf("\nSua nota � E\n\n");

        }

        contador_nota = 0;
        media = 0;

    }


    return 0;
}