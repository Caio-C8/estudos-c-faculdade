/*Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, mostre a categoria do funcionário.
Até R$ 1.000,00: Estagiário
R$ 1.000,00 a R$ 3.000,00: Junior
R$ 3.000,00 a R$ 5.000,00: Pleno
Acima de R$ 5.000,00: Senior */

#include <stdio.h>

int main()
{
	float salario;

	printf("seu salario: R$ ");
	scanf("%f", &salario);

	if (salario <= 1000)
	{
		printf("voce e da categoria estagiario.");
	}
	else if (salario > 1000 && salario <= 3000)
	{
		printf("voce e da categoria junior.");
	}
	else if (salario > 3000 && salario <= 5000)
	{
		printf("voce e da categoria pleno.");
	}
	else
	{
		printf("voce e da categoria senior.");
	}
}
