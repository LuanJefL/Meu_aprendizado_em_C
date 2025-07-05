/*Elabore uma função, com retorno, que calcula a área de um círculo. Para isto, utilize
a seguinte fórmula:
?? = ????²
Obs.: o valor do raio deve ser fornecido pelo usuário e deve ser passado como
argumento para a função. A função main deve receber e exibir o resultado do
cálculo.
*/

#include <stdio.h>
#include <locale.h>
#define PI 3.14

int area_calcular(int raio);

int main() {

    setlocale(LC_ALL, "Portuguese");
    int raio, area;

    printf("Qual é o raio do círculo?");
    scanf("%d", &raio);

    //area = area_calcular(raio);

    printf("A área é %d", area_calcular(raio));

    return(0);

}

int area_calcular(int raio) {

    int areac;

    areac = (raio * raio) * PI;

    return areac;

}