/*Faça um programa que solicita e armazena em um vetor, denominado de v1, cinco
números inteiros maiores ou iguais a zero. Construa outro vetor, denominado de v2,
do mesmo tipo e tamanho de v1, onde cada valor de v2 deve ser definido com o
resultado do fatorial de cada elemento correspondente em v1.
Ao final, o programa deve exibir o conteúdo dos vetores v1 e v2.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int fatorial = 1, cont, cont2, v1[5], v2[5];

    for (cont = 0; cont < 5; cont++) {

        printf("Qual número deseja adicionar na lista, maior ou iguaL a zero?");
        scanf("%d", &v1[cont]);

    }

    for (cont = 0; cont < 5; cont++) {

        printf("| %d |", v1[cont]);

    }

    printf("\n");

    for (cont = 0; cont < 5; cont++) {

        for(cont2 = 1; cont2 <= v1[cont]; cont2++) {

            fatorial *= cont2;


        }

        v2[cont] = fatorial;
        fatorial = 1;


    }

    for (cont = 0; cont < 5; cont++) {

        printf("| %d |", v2[cont]);

    }


    return 0;

}