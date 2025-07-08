/*Crie um programa que solicita e armazena o nome completo de um usuário em um
vetor, e informa a quantidade de caracteres que foi inserida.
Obs.: considere o ?\0? na contagem e não utilize a função strlen.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int cont, quant = 1;
    char nome[10];

    printf("Qual o seu nome?");
    gets(nome);


    for (cont = 0; nome[cont] != 0; cont++) {

        //printf("nome[%d] = %d\n", cont, nome[cont]);

        quant++;

    }

    printf("%d", quant);
    
    return 0;

}