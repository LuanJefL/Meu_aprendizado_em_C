/*Fa�a uma fun��o, sem retorno, que recebe a idade do usu�rio por par�metro, verifica
e informa se ele � maior ou menor de idade.
*/

#include <stdio.h>
#include <locale.h>

void reconhecer(int idade);

int main() {

    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Qual a sua idade?");
    scanf("%d", &idade);

    reconhecer(idade);

    return 0;

}

void reconhecer(int idade) {

    if (idade >= 18) {printf("Voc� � de maior");}
    else{printf("Voc� � de menor");}

}