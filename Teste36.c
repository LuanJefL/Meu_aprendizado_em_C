/*Fa�a um programa que solicita e armazena cinco n�meros inteiros em um vetor. Em
seguida, o programa deve percorrer o vetor e somar todos os seus valores. Ao final,
o programa deve exibir o resultado da soma.*/

#include <stdio.h>
#include <locale.h>



int main() {

    setlocale(LC_ALL, "Portuguese");

    int quant = 5, cont, lista[quant], soma = 0;

    for(cont = 0; cont < quant; cont++) {

        printf("Qual n�mero vai adicionar?");
        scanf("%d", &lista[cont]);

    }

    for(cont = 0; cont < quant; cont++) {

        soma += lista[cont];

    }

    printf("A soma resultante � %d", soma);



    return 0;

}