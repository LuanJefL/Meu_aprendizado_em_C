#include<stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero, sucessor, antecessor;


    printf("Qual o n�mero?");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("O sucessor �: %d\n", sucessor);
    printf("O sucessor �: %d\n", antecessor);



    return (0);
}