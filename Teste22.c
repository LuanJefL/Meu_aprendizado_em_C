/*Faça um programa para calcular o fatorial de n, onde o valor de n deve ser
fornecido pelo usuário. O programa deve exibir uma mensagem seguindo o padrão
ilustrado nas condições a seguir.
? Se o usuário digitar um valor maior ou igual a zero (n >= 0), como, por exemplo,
n = 4, o programa deve exibir na tela a seguinte mensagem: 4! = 24;
? Senão, o programa deve exibir na tela a seguinte mensagem: Não existe fatorial
de número negativo.*/

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


    } else { printf("Não existe fatorial negativo!!!"); } 

    printf("%d! = %d", max, fatorial); 
    return 0;

}