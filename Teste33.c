/*Crie uma fun��o, com retorno, que recebe tr�s notas por par�metro e calcula a
m�dia aritm�tica de um aluno. Crie outra fun��o, sem retorno, que recebe a m�dia
aritm�tica por par�metro e informa o conceito obtido pelo aluno, de acordo com o
quadro a seguir:
M�dia Conceito
>= 9 A
>= 7 e < 9 B
>= 6 e < 7 C
>= 4 e < 6 D
< 4 E*/

#include <stdio.h>
#include <locale.h>

float media(float media1, float media2, float media3);

void verificador(float media);

int main() {

    setlocale(LC_ALL, "Portuguese");

    float media1, media2, media3, media_f;

    printf("Qual a m�dia da primeira prova?");
    scanf("%f", &media1);

    printf("Qual a m�dia da segunda prova?");
    scanf("%f", &media2);

    printf("Qual a m�dia da terceira prova?");
    scanf("%f", &media3);

    verificador(media(media1, media2, media3));

   
    return 0;

}

float media(float media1, float media2, float media3) {

    float media_final;

    media_final = (media1 + media2 + media3) / 3; 

    return media_final;

}

void verificador(float media) {

    printf("M�dia � %f\n", media);
    
    if (media >= 9) {

        printf("Sua nota foi A!");

    }
    else if ((media >= 7) && (media < 9)) {

        printf("Sua nota foi B!");

    }
    else if ((media >= 6) && (media < 7)) {

        printf("Sua nota foi C!");

    }
    else if ((media >= 4) && (media < 6)) {

        printf("Sua nota foi D!");

    }
    else {

        printf("Sua nota foi E!");

    }

}