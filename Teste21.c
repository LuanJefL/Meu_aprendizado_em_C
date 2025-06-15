/*Faça um programa para calcular e exibir a média aritmética e o conceito de 10
alunos. Para cada um dos alunos, o programa deve solicitar e ler as notas das três
provas, calcular e exibir a média aritmética e informar o conceito obtido, de acordo
com a tabela a seguir:
Média Conceito
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

            printf("\nSua nota é A\n\n");

        }

        else if((media >= 7) && (media < 9)) {

            printf("\nSua nota é B\n\n");

        }

        else if((media >= 6) && (media < 7)) {

            printf("\nSua nota é C\n\n");

        }

        else if((media >= 4) && (media < 6)) {

            printf("\nSua nota é D\n\n");

        }

        else {

            printf("\nSua nota é E\n\n");

        }

        contador_nota = 0;
        media = 0;

    }


    return 0;
}