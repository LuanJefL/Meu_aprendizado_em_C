/*Crie um programa que simule uma calculadora simples, ou seja, que efetua as
quatro operaÃ§Ãµes bÃ¡sicas da matemÃ¡tica (adiÃ§Ã£o, subtraÃ§Ã£o, multiplicaÃ§Ã£o e divisÃ£o)
para dois valores reais fornecidos pelo usuÃ¡rio. O programa deve exibir as opÃ§Ãµes
ao usuÃ¡rio e efetuar uma delas, conforme a opÃ§Ã£o digitada pelo usuÃ¡rio. Para isso,
utilize a estrutura SWITCH. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int tipo_operacao;
    float numero1, numero2, resultado;

    printf("Qual cálculo você quer realizar?\nDigite \n1 para adição\n2 para subtração \n3 para multiplicação\n4 para divisão\n:");
    scanf("%d", &tipo_operacao);

    switch (tipo_operacao) {

        case 1:

            printf("Qual o primeiro número da conta:");
            scanf("%f", &numero1);

            printf("Qual o segundo número da conta:");
            scanf("%f", &numero2);

            resultado = numero1 + numero2;

            printf("O resultado da operação foi a seguinte:%f", resultado);

        break;

        case 2:

            printf("Qual o primeiro número da conta:");
            scanf("%f", &numero1);

            printf("Qual o segundo número da conta:");
            scanf("%f", &numero2);

            resultado = numero1 - numero2;

            printf("O resultado da operação foi a seguinte:%f", resultado);

        break;

        case 3:

            printf("Qual o primeiro número da conta:");
            scanf("%f", &numero1);

            printf("Qual o segundo número da conta:");
            scanf("%f", &numero2);

            resultado = numero1 * numero2;

            printf("O resultado da operação foi a seguinte:%f", resultado);

        break;

        case 4:

            printf("Qual o primeiro número da conta:");
            scanf("%f", &numero1);

            printf("Qual o segundo número da conta:");
            scanf("%f", &numero2);

            resultado = numero1 / numero2;

            printf("O resultado da operação foi a seguinte:%f", resultado);

        break;




    }



    return 0;
}