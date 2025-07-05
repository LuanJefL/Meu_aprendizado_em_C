/*Faça uma função, sem retorno, que recebe a idade do usuário por parâmetro, verifica
e informa se ele é maior ou menor de idade.
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

    if (idade >= 18) {printf("Você é de maior");}
    else{printf("Você é de menor");}

}