/*Escreva um programa que solicita e lê a idade do usuário, e exibe uma mensagem
informando se ele é maior ou menor de idade. Esses procedimentos devem ser
repetidos 10 vezes.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int anos, contador = 0;

    while (contador != 10) {

        printf("Quantos anos voc� tem?");
        scanf("%d", &anos);

        if (anos >= 18) {printf("Voc� � de maior\n"); anos = 0;}
        else {printf("Voc� � de menor!\n"); anos = 0;} 

        contador++;

    }



    return 0;
}