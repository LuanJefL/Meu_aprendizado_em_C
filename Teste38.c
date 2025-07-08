/*Elabore um programa que solicita e armazena cinco números reais em um vetor,
denominado de a, sendo que esses números serão utilizados para preencher outro
vetor. Sendo assim, declare outro vetor, denominando de b, do mesmo tipo e tamanho
de a e, em seguida, o preencha de acordo com as seguintes condições:
? Se o índice do vetor a for zero, insira em b o respectivo valor de a;
? Se o índice de a for par, insira em b o respectivo valor de a multiplicado por 5;
? Se o índice do vetor a for ímpar, insira em b o respectivo valor de a somado com 5;
Ao final, o programa deve exibir o conteúdo dos vetores a e b.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int cont, a[5], b[5];

    for (cont = 0; cont < 5; cont++) {

        printf("Qual número deseja adicionar na lista?");
        scanf("%d", &a[cont]);

    }

    for (cont = 0; cont < 5; cont++) {

        printf("| %d |", a[cont]);

    }

    for (cont = 0; cont < 5; cont++) {

        if (a[cont] == 0) {

            b[cont] = a[cont];

        }
        else if ((a[cont] % 2) == 0 && a[cont] != 0) {

            b[cont] = (a[cont] * 5);

        }
        else if ((a[cont] % 2) != 0) {

            b[cont] = (a[cont] + 5);

        }

    }

    printf("\n");

    for (cont = 0; cont < 5; cont++) {

        printf("| %d |", b[cont]);

    }


    return 0;

}