/*Elabore um programa que exibe todos os números primos existentes entre x e y,
onde x e y devem ser números naturais maiores que zero e fornecidos pelo usuário.
Exemplo: Se x = 2 e y = 7, o programa deve exibir os números 2, 3, 5 e 7.
Obs.: não esqueça de verificar se o intervalo fornecido é válido.*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    //Encontrar os primos
    int contador, divisoes_exatas;

    //Incrementação
    int max = 11, min = 2, contador_segundo, quant_num_primo = 0;

    
    printf("Quail o intervalo crescente que você deseja saber a quantidade de números primos?"); 


    printf("\nMin:");
    scanf("%d", &min);

    printf("Max:"); 
    scanf("%d", &max);


    if ((min < max) && (min > 1)) {


        //o minimo vai ser o valor crescente, o limite o máximo e vai aumentando até o máximo.
        for(contador_segundo = min; contador_segundo <= max; contador_segundo++) {

            //Sempre começa em 1, contador vai comaçar de acordo em qual número o incrementador está, cada vez o mínimo vai aumentando até o máximo
            for(contador = 1; contador <= contador_segundo; contador++) {

                if ((contador_segundo % contador) == 0) {

                    divisoes_exatas += 1;
                    
                }

            }

            if (divisoes_exatas == 2) {

                quant_num_primo += 1;
                printf("\nO número %d é primo\n", contador_segundo);

            }
 
        
        
        divisoes_exatas = 0;
        

    }

        printf("\nA quantidade de números primos é %d", quant_num_primo);

    }
    else {

        printf("Intervalo inválido!!!");

    }

    return 0;

}

