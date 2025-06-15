/*Escreva um programa que solicita e lÃª a idade do usuÃ¡rio, e exibe uma mensagem
informando se ele Ã© maior ou menor de idade. Esses procedimentos devem ser
repetidos 10 vezes.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int anos, contador = 0;

    while (contador != 10) {

        printf("Quantos anos você tem?");
        scanf("%d", &anos);

        if (anos >= 18) {printf("Você é de maior\n"); anos = 0;}
        else {printf("Você é de menor!\n"); anos = 0;} 

        contador++;

    }



    return 0;
}