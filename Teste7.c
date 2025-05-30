/*Implemente um programa que solicita ao usuário a sua idade e calcula quantos dias
de vida, aproximadamente, ele já viveu. Para simplificar o seu trabalho, ignore os
anos bissextos e use somente a idade, mas deixe o usuário ciente de que o resultado
apresentado é um valor aproximado.*/

#include <stdio.h>
#include <locale.h>

int main() {

    int anos, dias;

    setlocale(LC_ALL, "Portuguese");

    printf("Quantos anos você tem?:");
    scanf("%d", &anos);

    dias = (anos * 365);

    printf("A quantidade de dias que voc� viveu foi de: %d", dias);


    return(0);
}