/*A Lanchonete Coma Bem deseja informatizar o seu estabelecimento visando melhor
atender seus clientes. Para isso, decidiu trabalhar com pedidos realizados em seu
aplicativo, disponível em dispositivos eletrônicos dispostos no local. Você foi
contratado para criar um sistema para tal lanchonete. O cardápio da lanchonete está
ilustrado na tabela a seguir. Inicialmente, o programa deve exibir as informações da tabela anterior. Em seguida,
o programa deve solicitar e ler o código do item desejado e a quantidade de tal item.
Por fim, o programa deve calcular e exibir o valor a ser pago. Considere que, a cada
execução do programa, o cliente só pode escolher um item, variando apenas sua
quantidade.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int numero_pedido, quantidade, preco_total;

    printf("________________________________________________________________________");
    printf("\n|_____C�digo_do_item______|_____Especifica��o______|___Pre�o_unit�rio___|");
    printf("\n|__________100____________|____Cachorro_quente_____|_______10,00________|");
    printf("\n|__________101____________|____Bauru ______________|_______12,00________|");
    printf("\n|__________102____________|____X-Salada ___________|_______15,00________|");
    printf("\n|__________103____________|____Hamb�rguer__________|_______18,00________|");
    printf("\n|__________104____________|____Refrigerante (lata)_|_______05,00________|\n");

    printf("Qual o pedido que voc� vai pedir?");
    scanf("%d", &numero_pedido);

    switch (numero_pedido) {

        case 100:

            printf("Qual a quantidade que voc� deseja?:");
            scanf("%d", &quantidade);

            preco_total = quantidade * 10;

            printf("O pre�o total foi:%d", preco_total);


        break;


        case 101:

            printf("Qual a quantidade que voc� deseja?:");
            scanf("%d", &quantidade);

            preco_total = quantidade * 12;

            printf("O pre�o total foi:%d", preco_total);



        break;


        case 102:

            printf("Qual a quantidade que voc� deseja?:");
            scanf("%d", &quantidade);

            preco_total = quantidade * 15;

            printf("O pre�o total foi:%d", preco_total);



        break;


        case 103:

            printf("Qual a quantidade que voc� deseja?:");
            scanf("%d", &quantidade);

            preco_total = quantidade * 18;

            printf("O pre�o total foi:%d", preco_total);



        break;


        case 104:

            printf("Qual a quantidade que voc� deseja?:");
            scanf("%d", &quantidade);

            preco_total = quantidade * 5;

            printf("O pre�o total foi:%d", preco_total);



        break;




    }
    






    return 0;
}