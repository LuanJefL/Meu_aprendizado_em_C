/*Elabore uma fun��o, com retorno, que recebe um valor inteiro maior ou igual a zero
por par�metro e retorna o fatorial de tal n�mero. A fun��o main deve receber e
exibir o resultado.Elabore uma fun��o, com retorno, que recebe um valor inteiro maior ou igual a zero
por par�metro e retorna o fatorial de tal n�mero. A fun��o main deve receber e
exibir o resultado.*/

#include <stdio.h>
#include <locale.h>

int fatorial(int numero);

int main() {

    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Qual o n�mero que voc� deseja saber o fatorial?");
    scanf("%d", &numero);

    printf("O fatorial resultante foi %d", fatorial(numero));

    return 0;

}

int fatorial(int numero){

    int fatorial_r = 1, cont;
    
    for(cont = 1;  cont <= numero; cont++) {

        fatorial_r *= cont;


    }


    return fatorial_r;

}