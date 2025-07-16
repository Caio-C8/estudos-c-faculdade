/* O Sindicato Rural de Patos de Minas quer fazer uma análise da FENAMILHO 2024 e
solicitou o desenvolvimento de uma aplicação em linguagem C capaz de gerar as seguintes informações:
A - Ler o número de pessoas de cada uma das 08 noites de shows da FENAMILHO e retornar o maior número de pessoas de uma noite.
B – Ler o faturamento de cada uma de TODAS as barraquinhas da FENAMILHO e retornar o faturamento total de todas as barraquinhas. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 02");

    int cont = 0;
    float fat, total;
    char quest;

    do
    {
        cont++;

        printf("faturamento da %ia barraquinha: ", cont);
        scanf("%f", &fat);

        total += fat;

        fflush(stdin);

        printf("deseja continuar? S/N: ");
        scanf("%c", &quest);
    } while (quest == 's' || quest == 'S');

    printf("o faturamento total de todas as barraquinhas foi de R$ %.2f.", total);
}