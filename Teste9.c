/*FaΓ§a um programa para calcular o volume de uma caixa retangular. Para isto, utilize
a seguinte fΓ³rmula:
π£πππ’ππ = ππππππππππ‘π Γ πππππ’ππ Γ πππ‘π’ππ
Os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuΓ‘rio.
*/

#include <stdio.h>
#include <locale.h>

int main() {

    double volume, comprimento, largura, altura;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o comprimento:");
    scanf("%lf", &comprimento);

    printf("Digite o largura:");
    scanf("%lf", &largura);

    printf("Digite o altura:");
    scanf("%lf", &altura);

    volume = comprimento * altura * largura;

    printf("O volume ι: %lf", volume);


    return(0);
}