/*Crie um programa que simule uma calculadora simples, ou seja, que efetua as
quatro operações básicas da matemática (adição, subtração, multiplicação e divisão)
para dois valores reais fornecidos pelo usuário. O programa deve exibir as opções
ao usuário e efetuar uma delas, conforme a opção digitada pelo usuário. Para isso,
utilize a estrutura SWITCH. */

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int tipo_operacao;
    float numero1, numero2, resultado;

    printf("Qual c�lculo voc� quer realizar?\nDigite \n1 para adi��o\n2 para subtra��o \n3 para multiplica��o\n4 para divis�o\n:");
    scanf("%d", &tipo_operacao);

    switch (tipo_operacao) {

        case 1:

            printf("Qual o primeiro n�mero da conta:");
            scanf("%f", &numero1);

            printf("Qual o segundo n�mero da conta:");
            scanf("%f", &numero2);

            resultado = numero1 + numero2;

            printf("O resultado da opera��o foi a seguinte:%f", resultado);

        break;

        case 2:

            printf("Qual o primeiro n�mero da conta:");
            scanf("%f", &numero1);

            printf("Qual o segundo n�mero da conta:");
            scanf("%f", &numero2);

            resultado = numero1 - numero2;

            printf("O resultado da opera��o foi a seguinte:%f", resultado);

        break;

        case 3:

            printf("Qual o primeiro n�mero da conta:");
            scanf("%f", &numero1);

            printf("Qual o segundo n�mero da conta:");
            scanf("%f", &numero2);

            resultado = numero1 * numero2;

            printf("O resultado da opera��o foi a seguinte:%f", resultado);

        break;

        case 4:

            printf("Qual o primeiro n�mero da conta:");
            scanf("%f", &numero1);

            printf("Qual o segundo n�mero da conta:");
            scanf("%f", &numero2);

            resultado = numero1 / numero2;

            printf("O resultado da opera��o foi a seguinte:%f", resultado);

        break;




    }



    return 0;
}