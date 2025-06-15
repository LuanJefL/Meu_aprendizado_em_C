/*Escreva um programa que calcula e exibe o fatorial dos números ímpares existentes
no intervalo entre 1 (inclusive) e 11 (inclusive).  */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    //Incrementador de 1 a 11
    int max_primeiro = 11, cont_primeiro;

    //Calcular o fatorial
    int cont_segundo, fatorial = 1;

    for(cont_primeiro = 1; cont_primeiro <= max_primeiro; cont_primeiro++) {
    
        for(cont_segundo = 1; cont_segundo <= cont_primeiro; cont_segundo++) {

            fatorial *= cont_segundo;
            
        }
    
        printf("\n\n%d! = %d", cont_primeiro, fatorial);
        fatorial = 1;

    }

    return 0;

}