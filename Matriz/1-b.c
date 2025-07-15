/* Desenvolver um algoritmo capaz de armazenar os dados acadêmicos dos 10 alunos de uma turma,
sendo que para cada aluno deve ser armazenada: quantidade de aprovações, quantidade de reprovações,
quantidade de exame especial, e ano de ingresso no curso. Para isso defina uma matriz composta por 10 linhas e 4 colunas.
b) calcular a quantidade total de exame especial */

#include <stdio.h>
#include <string.h>

int main()
{
	int tabelaAcad[10][4], qtdeExame = 0;

	printf("digite a quantidade de aprovacoes, quantidade de reprovacoes, quantidade de exames especiais e ano de ingresso do curso de um aluno: ");

	for (int i = 0; i < 10; i++) // linha
	{
		for (int j = 0; j < 4; j++) // coluna
		{
			scanf("%i", &tabelaAcad[i][j]);
		}
		printf("aluno %i concluido.\n", i + 1);
	}

	// visualização da tabela
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%i ", tabelaAcad[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 10; i++)
	{
		if (tabelaAcad[i][2] != 0)
		{
			qtdeExame = qtdeExame + tabelaAcad[i][2];
		}
	}

	printf("Quantidade total de exames especiais feitos: %i\n", qtdeExame);
}
