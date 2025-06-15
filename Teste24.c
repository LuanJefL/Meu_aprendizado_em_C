/*Elabore um programa que exibe todos os n�meros primos existentes entre x e y,
onde x e y devem ser n�meros naturais maiores que zero e fornecidos pelo usu�rio.
Exemplo: Se x = 2 e y = 7, o programa deve exibir os n�meros 2, 3, 5 e 7.
Obs.: n�o esque�a de verificar se o intervalo fornecido � v�lido.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    //Encontrar os primos
    int contador, divisoes_exatas;

    //Incrementa��o
    int max = 11, min = 2, contador_segundo, quant_num_primo = 0;

    
    printf("Quail o intervalo crescente que voc� deseja saber a quantidade de n�meros primos?"); 


    printf("\nMin:");
    scanf("%d", &min);

    printf("Max:"); 
    scanf("%d", &max);


    if ((min < max) && (min > 1)) {


        //o minimo vai ser o valor crescente, o limite o m�ximo e vai aumentando at� o m�ximo.
        for(contador_segundo = min; contador_segundo <= max; contador_segundo++) {

            //Sempre come�a em 1, contador vai coma�ar de acordo em qual n�mero o incrementador est�, cada vez o m�nimo vai aumentando at� o m�ximo
            for(contador = 1; contador <= contador_segundo; contador++) {

                if ((contador_segundo % contador) == 0) {

                    divisoes_exatas += 1;
                    
                }

            }

            if (divisoes_exatas == 2) {

                quant_num_primo += 1;
                printf("\nO n�mero %d � primo\n", contador_segundo);

            }
 
        
        
        divisoes_exatas = 0;
        

    }

        printf("\nA quantidade de n�meros primos � %d", quant_num_primo);

    }
    else {

        printf("Intervalo inv�lido!!!");

    }

    return 0;

}

