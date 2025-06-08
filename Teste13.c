/*A determinação da divisibilidade de um número por outro é importante na
programação. Sabendo disso, crie um programa que solicita e lê dois números
inteiros (numerador e denominador) e verifica se a divisão é exata. Se for, exiba a
mensagem: “É divisível!”. Caso contrário, exiba a mensagem: “Não é divisível!”.
Obs.: não esqueça que a divisão só deve ser realizada, caso o denominador seja
diferente de zero. Caso contrário, o programa deve exibir uma mensagem
informando que a divisão é indefinida.
*/

#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int numero, divisor;

    printf("Qual o n�mero que voc� quer saber se a divisibilidade � exata?:");
    scanf("%d", &numero);

    printf("Digite o divisor:");
    scanf("%d", &divisor);


    if ((numero % divisor) == 0) {

        printf("� uma divis�o exata!");

    }
    else {

        printf("N�o � uma divis�o exata!");

    }





    return 0;
}