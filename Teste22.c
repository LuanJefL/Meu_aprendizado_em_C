/*Fa�a um programa para calcular o fatorial de n, onde o valor de n deve ser
fornecido pelo usu�rio. O programa deve exibir uma mensagem seguindo o padr�o
ilustrado nas condi��es a seguir.
? Se o usu�rio digitar um valor maior ou igual a zero (n >= 0), como, por exemplo,
n = 4, o programa deve exibir na tela a seguinte mensagem: 4! = 24;
? Sen�o, o programa deve exibir na tela a seguinte mensagem: N�o existe fatorial
de n�mero negativo.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int max, fatorial = 1, contador = 0;

    printf("Qual o fatorial deseja ver?: ");
    scanf("%d", &max);

    if (max >= 0) {

        while(contador != max) {


            contador++;
            fatorial *= contador;

        }


    } else { printf("N�o existe fatorial negativo!!!"); } 

    printf("%d! = %d", max, fatorial); 
    return 0;

}