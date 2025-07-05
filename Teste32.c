/*Elabore uma função, com retorno, que recebe um valor inteiro maior ou igual a zero
por parâmetro e retorna o fatorial de tal número. A função main deve receber e
exibir o resultado.Elabore uma função, com retorno, que recebe um valor inteiro maior ou igual a zero
por parâmetro e retorna o fatorial de tal número. A função main deve receber e
exibir o resultado.*/

#include <stdio.h>
#include <locale.h>

int fatorial(int numero);

int main() {

    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Qual o número que você deseja saber o fatorial?");
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