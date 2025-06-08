/*Na UFERSA, será aprovado na disciplina o aluno que obtiver Média Parcial (MP)
igual ou maior que 7,0 (sete vírgula zero) ou Média Final (MF) igual ou maior que
5,0 (cinco vírgula zero). Para o cálculo da MP usa-se a seguinte fórmula:
𝑀𝑃 =
(𝐴1 + 𝐴2 + 𝐴3)
3
Onde A1, A2 e A3 são as notas da primeira, segunda e terceira avaliação,
respectivamente.
O aluno que obtiver a MP igual ou superior a 3,5 (três vírgula cinco) e inferior a 7,0
(sete vírgula zero), será submetido a uma Avaliação Final (AF), e terá sua MF
calculada de acordo com a seguinte fórmula:
𝑀𝐹 =
[(6 × 𝑀𝑃) + (4 × 𝐴𝐹)]
10
Elabore um programa que calcula e exibe uma mensagem informando a(s) média(s)
obtidas e a situação final de um aluno, segundo os critérios adotados pela UFERSA.
Para isso, o programa deve solicitar e ler as notas necessárias para o cálculo da(s)
média(s).*/

#include <stdio.h>
#include <locale.h>

int main() {

    float A1, A2, A3, Af, Mp, Mf;

    setlocale(LC_ALL, "Portuguese");

    printf("Qual a primeira nota?:");
    scanf("%f", &A1);

    printf("Qual a segunda nota?:");
    scanf("%f", &A2);

    printf("Qual a terceira nota?:");
    scanf("%f", &A3);

    Mp = (A1 + A2 + A3) / 3;

    printf("%f", Mp);
    printf("\n");

    if (Mp >= 7) {

        printf("Voc� pasou!!");

    }

    else {

        printf("Voc� n�o pasou, ter� que fazer a avalia��o final.");
        printf("Informe sua nota da avalia��o final:");
        scanf("%f", &Af);

        Mf = ((6 * Mp) + (4 * Af)) / 10;

        if (Mf >= 5) {

            printf("Voc� passou de ano!!!");


        }

        else {

            printf("Voc� n�o passou!!!");

        }

    }




    return 0;
}