/*Elabore uma fun��o, com retorno, que calcula a �rea de um c�rculo. Para isto, utilize
a seguinte f�rmula:
?? = ????�
Obs.: o valor do raio deve ser fornecido pelo usu�rio e deve ser passado como
argumento para a fun��o. A fun��o main deve receber e exibir o resultado do
c�lculo.
*/

#include <stdio.h>
#include <locale.h>
#define PI 3.14

int area_calcular(int raio);

int main() {

    setlocale(LC_ALL, "Portuguese");
    int raio, area;

    printf("Qual � o raio do c�rculo?");
    scanf("%d", &raio);

    //area = area_calcular(raio);

    printf("A �rea � %d", area_calcular(raio));

    return(0);

}

int area_calcular(int raio) {

    int areac;

    areac = (raio * raio) * PI;

    return areac;

}