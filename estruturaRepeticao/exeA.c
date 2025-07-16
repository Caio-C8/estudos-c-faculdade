/* O Sindicato Rural de Patos de Minas quer fazer uma análise da FENAMILHO 2024 e
solicitou o desenvolvimento de uma aplicação em linguagem C capaz de gerar as seguintes informações:
A - Ler o número de pessoas de cada uma das 08 noites de shows da FENAMILHO e retornar o maior número de pessoas de uma noite.
B – Ler o faturamento de cada uma de TODAS as barraquinhas da FENAMILHO e retornar o faturamento total de todas as barraquinhas. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 02");

    int pessoas, maior = 0;

    for (int i = 1; i <= 8; i++)
    {
        printf("numero de pessoas da %i noite: ", i);
        scanf("%i", &pessoas);

        if (pessoas > maior)
        {
            maior = pessoas;
        }
    }

    printf("a noite com mais pessoas teve %i pessoas", maior);
}